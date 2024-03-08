#include <iostream>
#include <vector>

void  linearSearch(std::vector<int> arr, int key)
{
   int pos=-1;
   for (auto i = 0; i< arr.size();++i)
     {
        if(arr[i] == key)
        {
                     pos = i;
          break;
          }
       
     }

  if(pos >= 0)
    std::cout<<"key: "<<key<<" found at position : "<<pos<<std::endl;
 else
    std::cout<<" key : "<<key<<" not found"<<std::endl;
  return;
}

int main()
{
  std::vector<int > arr={1,2,3,4,5,6,7,8};

  linearSearch(arr, 6);
  
  

  return 0;
}