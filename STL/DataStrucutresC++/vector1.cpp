#include<iostream>
#include<vector>



int main()
{
  std::vector<int> a= {1,2,3,4,5};
  a.reserve(100);
  a.push_back(1);
  std::cout<<"a.size: "<<a.size()<< " a.capacity: "<<a.capacity()<<std::endl;
  return 0;
}