#include <iostream>
#include<vector>
using namespace std;

/*
   quick sort 
 
  */

/*
int partition(int array[] , int left, int right)
{
     int pivat = array[left];
    int  l = left;
    int  r = right;
    std::cout<<"Pivot:"<<pivat<<"\n";
    while ( l < r)
      {
         while(array[l]<= pivat && l <r )
            l++;

         while(array[r] > pivat && r >l)
            r--;
         std::cout<<"swap: left["<<l<<"] "<<array[l]<< "\t right["<<r<<"]"<<array[r]<<"\n";
        if( l <r) std::swap(array[l], array[r]);
        
      }

    swap( array[left], array[r-1]);
  return r;
     
}
*/

int partition(int arr[], int low, int high)
{
 
    // First element as pivot
    int pivot = arr[low];
    int st = low; // st points to the starting of array
    int end = high; // end points to the ending of the array
    int k = high;
    for (int i = high; i > low; i--) {
        if (arr[i] > pivot)
        {
            swap(arr[i], arr[k]);
           k--;
        }
    }
    swap(arr[low], arr[k]);
    // As we got pivot element index is end
    // now pivot element is at its sorted position
    // return pivot element index (end)
    return k;
}
void quickSort(int array[], int l , int r)
{
  if( l < r)
    {
    
  int  pivat =  partition(array, l ,r );
  std::cout<<" calling quickSort left"<<"\n";
       for(int  i =l; i<r;i++)
    std::cout<<array[i]<<std::endl;
  quickSort(array, l, pivat -1);
  std::cout<<" calling quickSort right"<<"\n";
  quickSort(array,pivat+1, r);
  

    }
}
int main()
{
  int array[]={1,5,3,6,4,2,9,15};
for(int  i =0; i<8;i++)
    std::cout<<array[i]<<std::endl;
  quickSort(array,0,7);

  for(int  i =0; i<8;i++)
    std::cout<<array[i]<<std::endl;
  return 0;
}