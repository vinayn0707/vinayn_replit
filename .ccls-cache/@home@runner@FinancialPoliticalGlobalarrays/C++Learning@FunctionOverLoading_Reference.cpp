#include <iostream>
using namespace std;
/*
int  max (int a, int b)
{

  return (a>b?a:b);
}

float  max (float a, float b)
{

  return (a>b?a:b);
}

double  max(double a, double b)
{

  return (a>b?a:b);
}

string  max (string a, string b)
{

  return (a>b?a:b);
}
*/

template <typename T>
T &MyMax (T a , T b)
{

  return (a>b?a:b);
}


int main()
{
  int  a{1},b{5}, iRes;

  float c{10.0f}, d{10.3}, fRes;

  double e{15.1}, f{15.2}, dRes;

  string str1{"vinay"}, str2{"vinayn"} ,sRes;

  iRes = MyMax<int>(a,b);
  fRes = MyMax<float>(c,d);
   dRes = MyMax<double>(e, f);
   sRes = MyMax<string>(str1,str2);
  
  cout<<"int : "<<iRes<<endl;
  cout<<"float: "<<fRes<<endl;
  cout<<"double: "<<dRes<<endl;
  cout<<"string: "<<sRes<<endl;

  return  0;
}