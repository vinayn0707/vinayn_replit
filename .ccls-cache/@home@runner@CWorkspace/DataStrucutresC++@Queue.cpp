#include<iostream>
#include<queue>

void print(std::queue<int> &qu)
{
  while(!qu.empty())
    {
      std::cout<<qu.front()<<std::endl;
      qu.pop();
    }
}

int main()
{
  std::queue<int> qu;

  qu.push(10);
  qu.push(20);
  qu.push(5);
   std::cout<<"print back"<<std::endl;
   std::cout<<qu.back()<<std::endl;
   std::cout<<"End"<<std::endl;
  print(qu);
  
}
