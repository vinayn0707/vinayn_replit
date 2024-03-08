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
T MyMax (T a , T b)
{

  return (a>b?a:b);
}


int main()
{
  int  a{1},b{5};

  float c{10.0f}, d{10.3};

  double e{15.1}, f{15.2};

  string str1{"vinay"}, str2{"vinayn"};

  cout<<"int : "<<MyMax<int>(a,b)<<endl;
  cout<<"float: "<<MyMax<float>(c,d)<<endl;
  cout<<"double: "<<MyMax<double>(e,f)<<endl;
  cout<<"string: "<<MyMax<string>(str1,str2)<<endl;

  return  0;
}