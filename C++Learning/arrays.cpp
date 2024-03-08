#include<iostream>
using  namespace std;


int main()
{

  char arr[]= {'a','b','c','d'};

  cout<<"size= "<<sizeof(arr)<<endl;
  cout<<"str="<<arr<<endl;
  printf("str=%s, size=%lu\n",arr,sizeof(arr));


  return 0;
}