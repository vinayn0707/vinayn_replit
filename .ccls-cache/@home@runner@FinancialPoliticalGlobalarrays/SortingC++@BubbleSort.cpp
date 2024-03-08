#include <iostream>
#include <algorithm>
using namespace std;

int BubbleSort(int array[], int n)
{
  for(int i = 0;i-1 < n;++i)
    { // incase if array already sorted , we can exit  after 1st intertion nased on the flag  .
       bool  flag = false;
      for (int j = 0; j < n -i;j++)
        {
          if( array[j ] > array [j+1])
          {
            swap(array[j ] , array [j+1]);
            flag = true;
            }
        }
      if ( flag == false)
        break;
        
    }
  
}

int main()
{

  int array[]={11,2 ,33,4,5};
cout<<" before"<<endl<<__TIME__;
  BubbleSort(array, 5);
cout<<" after"<<endl<<__TIME__;
  for(int i = 0 ;i < 5;i++)
    cout<<array[i]<<endl;

  int array1[]={11,2 ,33,4,5};
cout<<" Use builtin sort"<<endl;
  cout<<" before"<<endl<<__TIME__;
sort(array1,array1+5);
  cout<<" after"<<endl<<__TIME__;
  for(int i = 0 ;i < 5;i++)
    cout<<array1[i]<<endl;
  return 0;
}