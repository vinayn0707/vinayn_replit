#include <iostream>
#include<vector>
using namespace std;

/*
   Merge sort 
  split array into 2 array. and keep spliting  untill last lement  using  recursive and 

call   merge on them  to sort 2 array's  .  

  */


void merge(int array[] , int left, int mid , int right)
{
    int  l = left;
    int  r = mid+1;
      std::vector<int> output;
    while( l <= mid && r <=right)
      {
         if(array[l]<= array[r])
         {
           output.push_back(array[l]);
           l++;
         }
         else
         {
           output.push_back(array[r]);
           r++;
         }
        
      }

    while( l <=mid)
      {
         output.push_back(array[l]);
           l++;
      }
  while(r <= right)
    {
       output.push_back(array[r]);
           r++;
    }

  for(int i =left; i <=right;i++)
    {
      //std::cout<<"output["<<i<<" -"<<left<<"] : "<<output[i -l]<<"\n";
      array[i]= output[i -left];

      std::cout<<" array["<<i<<"] : "<< array[i]<<"\n";
    }
}

void mergeSort(int array[], int l , int r)
{
  if( l >= r)
    return;
  int  mid  = (l+r)/2;
  std::cout<<" calling MergeSort left"<<"\n";
  mergeSort(array, l, mid);
  std::cout<<" calling MergeSort right"<<"\n";
  mergeSort(array,mid+1, r);
  std::cout<<" calling Merge"<<"\n";
  merge(array, l, mid,r);
}
int main()
{
  int array[]={1,3,6,4,2,9,15};
for(int  i =0; i<7;i++)
    std::cout<<array[i]<<std::endl;
  mergeSort(array,0,6);

  for(int  i =0; i<7;i++)
    std::cout<<array[i]<<std::endl;
  return 0;
}