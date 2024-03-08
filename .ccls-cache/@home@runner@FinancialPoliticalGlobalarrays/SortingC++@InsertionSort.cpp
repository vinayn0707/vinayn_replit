#include<iostream>
int * insertionSort( int arr[], int s)
{
  for (int i =0; i< s;i++)
    {
      
       int j = i;
      while( j >0 && arr[j -1] >arr[j])
        {
          int temp =  arr[j];
          arr[j] = arr[j-1];
          arr[j-1] = temp;
          j--;
        }
         
      
      
    }
  return arr;
  
}

void insertionSortRecr( int arr[], int l, int s)
{
   if(l >= s)
     return ;
       
       int j = l;
      while( j >0 && arr[j -1] >arr[j])
        {
          int temp =  arr[j];
          arr[j] = arr[j-1];
          arr[j-1] = temp;
          j--;
        }     
     
   
  insertionSortRecr( arr, l+1, s);
  
}

int main()
{
  int array[]={23, 45, 65, 12,34,6,34};

//  int array1[7];
  //int *array1 = 
  insertionSortRecr(array,0, 7);
  for(int i =0; i < 7;i++)
    {
      std::cout<<array[i]<<"\n";
    }
  std::cout<<"\n";
}