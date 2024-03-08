#include <iostream>
using namespace std;

int  MyMax (int& a, int& b)
{

  return (a>b?a:b);
}

int  MyMax (const int& a, const int& b)
{

  return (a>b?a:b);
}






int main()
{
  int  a{1},b{5}, iRes;

 const  int  &c =  a;
  const int  &d = b;
  iRes = MyMax(c, d);
  
  
  cout<<"int : "<<iRes<<endl;
 

  return  0;
}