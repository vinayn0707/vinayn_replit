#include <stdio.h>
#include  <stdlib.h>
#include <malloc.h>

struct singleList
{
	int  data;
	struct singleList *list;

};
void insertNodeToLast(struct singleList  *headNode, int data);

struct singleList *insertNodetoHead(struct singleList  **headNode, int data);

void  insertNodeIntheMiddle( struct singleList *prev_Node, int  data);

void deleteNodeInSSList(struct singleList **head, int data);

void  main()
{
	struct singleList *node =NULL, *temp, *nodeTemp = NULL;

	int  i =0;


	while (i < 5)
	{

		temp = (struct singleList*)malloc (sizeof( struct singleList));
		temp->data = i;
		temp->list = nodeTemp;
		nodeTemp  = temp;
		i++;
	}
	node =temp;
	insertNodeToLast(node, 100);
	insertNodetoHead( &node, 200);
	nodeTemp= node;
	while (nodeTemp->list->list != NULL)
	{
		printf("nodeTemp->data=[%d]\n",nodeTemp->data);
		nodeTemp= nodeTemp->list;
	}
	insertNodeIntheMiddle(nodeTemp,300);
	nodeTemp= node;
	while  ( nodeTemp!= NULL )
	{
		printf("Node data %d  =%d\n",nodeTemp->data,nodeTemp->data);
		nodeTemp = nodeTemp->list;
	}

  deleteNodeInSSList(&node,4);
  deleteNodeInSSList(&node,300);

nodeTemp= node;
  	while  ( nodeTemp!= NULL )
	{
		printf("after data %d  =%d\n",nodeTemp->data,nodeTemp->data);
		nodeTemp = nodeTemp->list;
	}
}

void insertNodeToLast(struct singleList  *headNode, int data)
{
	struct singleList *temp , *tempNode;

	temp =  (struct singleList *) malloc(sizeof(struct singleList));

	temp->data = data;
	temp->list = NULL;
	tempNode = headNode->list;
	while (tempNode->list != NULL)
	{
		tempNode = tempNode->list;
	}
	tempNode->list = temp;
}

struct singleList *insertNodetoHead(struct singleList  **headNode, int data)
{
	struct singleList *temp ,*tempNode; 

	temp =  (struct singleList *) malloc(sizeof(struct singleList));

	temp->data = data;
	temp->list = *headNode;
	*headNode = temp;  

	return temp;
}


void  insertNodeIntheMiddle( struct singleList *prev_Node, int  data)
{
	struct singleList *tempNode;

	tempNode = (struct singleList *)malloc  (sizeof(struct singleList));
	if  ( tempNode != NULL)
	{
		tempNode->data  = data;
		tempNode->list = prev_Node->list;
		prev_Node->list = tempNode;
	}
}

void deleteNodeInSSList(struct singleList **head, int data)
{
  struct singleList *temp = NULL,*next = NULL, *prev =  NULL;

  temp = *head;
   next  = (*head)->list;
  if( temp != NULL && temp->data == data)
    {
       
       *head =  next ;
        free(temp);

    }
    else
    {
      while(temp!= NULL)
      {

        if(temp->data == data)
        {
          prev->list = temp->list;
          free(temp);
          return;
        }
        prev = temp;
        temp = temp->list;
      }
    }
}


void deleteNode(struct singleList **head, int data)
{

  struct singleList *node = NULL, *temp=NULL;
  node = *head;
  if(node->data == data)
  { 
    temp = node->next;

    node->next = 
    

  }
  temp = node ;
  deleteNode(&node,data);
}
