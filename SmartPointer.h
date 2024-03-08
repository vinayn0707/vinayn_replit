#include<iostream>

using  namespace std;

class Rectangle {

 int length;
 int breadth;
 public:
Rectangle(int a , int b)
{
  length  = a;
  breadth = b;
}

void  setLength(int l)
{
 length = l;

}

void setBreadth(int b)
{

  breadth = b;
}
int area ()
{
 return length*breadth;

}
};

