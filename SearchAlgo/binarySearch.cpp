#include <iostream>
#include <algorithm>

int binarySearch(int arr[], int n, int key)
{
  int pos=0;
  int i =0, mid =0, e= n-1;

  while(i <= e)
    {
      mid = i + (e-i)/2;
      if(arr[mid] == key)
        return mid;
      else if( arr[mid] > key)
      {
        e =  mid -1;
      }
      else
      {
        i = mid+1 ;
      }
    }
  return -1;
}





int main()
{
 int  n;
  
  std::cout<<" enter number of elements  in array"<<std::endl;
  std::cin>>n;
  int arr[n], i=0;
  std::cout<<" Enter the elements"<<std::endl;
  while (i < n)
    {
   std::cin>>arr[i];
   
     // std::cout<<arr[i]<<std::endl;
      i++;
      }
  std::sort(arr, arr+n);
  i =0;
  std::cout<<" sorted output"<<std::endl;
    while (i < n)
    {
   std::cout<<arr[i]<<std::endl;;
   
     // std::cout<<arr[i]<<std::endl;
      i++;
      }
  int s=0;
  std::cout<<" Enter the element to search"<<std::endl;
  std::cin>>s;
  int index = binarySearch(arr, n, s);

  if( index >= 0)
  {
  std::cout<<" Element found at position: "<< index<<std::endl;
    }
  else 
  {
    std::cout<<" element not found"<<std::endl;
  }
  return 0;
}