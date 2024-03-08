#include <iostream>
using namespace std;

int selectionSort(int *array, unsigned int size)
{
  int small_index=0;
   int temp=0;
  for(int i =0; i < size -1;i++)
    {

      for (int j = i+1; j<size;j++)
        {
          small_index = i;
          if ( array[i]> array[j])
            small_index = j;
        }

    /*  temp = array[i];
      array[i] = array[small_index];
      array[small_index] = temp;
      */
      swap(array[i], array[small_index] );
    }
}

int main()
{

  int  array[5]= {3,2,2,6,1};

  
  selectionSort(array, 5);
  cout<<"Sorted array is  "<<endl;
  for(int i = 0; i < 5; i++)
    cout<<array[i]<<endl;

  return  0;
}