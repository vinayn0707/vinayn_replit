#include<iostream>
#include<set>
#include<functional>

int main()
{
  std::set<int, std::greater<>>  st= {1,3,2,5,2,4,8,6,0};
  for(auto &i:st)
    {
      std::cout<<i<<" ";
      
    }
  std::cout<<std::endl;

  std::set<std::string, std::greater<std::string>>  stStr= {"jhon","vickey","peter"};
  for(auto &i:stStr)
    {
      std::cout<<i<<" "<<std::endl;
    }
  return 0;
}