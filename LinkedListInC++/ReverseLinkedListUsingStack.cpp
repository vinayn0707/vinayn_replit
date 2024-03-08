#include<iostream>
#include<stack>

using  namespace std;

struct linkedList
{
   int data;

   struct linkedList *next;

};


int  main()
{
  struct linkedList *mainNode = NULL;
  struct linkedList *tempNode = NULL;
  int i =0;
  //mainNode = tempNode;
  while (i < 5)
	{
    struct linkedList *temp;
		temp = new (struct linkedList);
		temp->data = i;
    temp->next = NULL;
    if(mainNode == NULL)
	{

   mainNode  = temp;
     tempNode = temp;
     
  }
  else
  {
      tempNode->next = temp ;
      tempNode= temp;

  }
   
		i++;

    //cout<<mainNode->data<<endl;
	}
  //cout<<mainNode->data<<endl;
   tempNode = mainNode ;
  while(tempNode!= NULL)
  {

    cout<<tempNode->data<<endl;
    tempNode= tempNode->next;
  }
tempNode = mainNode ;
stack<struct linkedList *> s;
while(tempNode!= NULL)
  {

   s.push(tempNode);
   tempNode= tempNode->next;
  }   
  



tempNode = s.top();
s.pop();
mainNode  = tempNode;
while(!s.empty())
  {

  tempNode->next = s.top();
   s.pop();
tempNode= tempNode->next;
  }   
  
   tempNode = mainNode ;
  while(tempNode!= NULL)
  {

    cout<<tempNode->data<<endl;
    tempNode= tempNode->next;
  }



}