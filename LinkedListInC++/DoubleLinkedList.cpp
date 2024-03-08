#include<iostream>

using  namespace std;
class Node
{

public:

int data;
Node *next;
Node *prev;


};

void  InsertNode(Node **head, int data)
{

Node *temp = new Node();

temp->data = data;
temp->next = *head;
if(*head!= NULL)
(*head)->prev = temp;

temp->prev = NULL;
(*head) = temp;

}

void  InsertNodeAtFront(Node **head, int data)
{
   Node *new_node = new Node();
   new_node->data  = data;
  if(*head == NULL)
  {

    new_node->next = NULL;
    new_node->prev = NULL;
    (*head) = new_node;
  }
  else
  {
    Node *temp= NULL;
    temp = *head;
    while (temp->next != NULL)
    {
       temp = temp->next;

    }

    temp->next = new_node;
    new_node->prev = temp;

  }
     

}
void  insertNodeInfront(Node *Prev, int data)
{
   Node *temp=NULL;
   if(Prev == NULL)
   return;

  temp = new Node();

  temp->data = data;

  temp->prev = Prev;
  temp->next  = Prev->next;
  Prev->next  = temp;
  

}

void deleteNode(Node **head, Node *delNode)
{

  if (*head == NULL || delNode == NULL )
    return;

    if(*head == delNode)
      *head = delNode->next;

    if(delNode->next == NULL)
    {
       delNode->prev->next = NULL;
       delete(delNode);
       return ;
    }
   if(delNode->prev != NULL)
    delNode->prev->next  = delNode->next;
   if(delNode->next != NULL)
    delNode->next->prev = delNode->prev;
    delete(delNode);

}
void display(Node *head)
{
  int i = 1;
  
  while(head!= NULL)
  {
    
    cout<<i<<"st Node is "<<head->data<<endl;
    head = head->next;
    i++;
  }
}

int  main()

{

  Node *head=NULL;
  InsertNode(&head, 10);
  InsertNode(&head,20);
  InsertNode(&head,30);
  InsertNodeAtFront(&head,40);
  deleteNode(&head,head);
  display(head);
  return 0;
}