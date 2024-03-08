#include<iostream>

class A
{
  public:
  A()
  {
    std::cout<<" base class constucrtor"<<std::endl;
  }
  virtual  void display() = 0;
};

class B: public A
{
  public:
B()
{
  std::cout<<" derived class B constucrtor"<<std::endl;
}

void display()
{
  std::cout<<"derived class B display for  pure base class"<<std::endl;
}

};

int  main()
{
  B objB;
  objB.display();
  //A objA; // not allowed to create object of abstract class.
  std::cout<<"size of objB: "<<sizeof(objB)<<std::endl;
  std::cout<<"size of class B: "<<sizeof(B)<<std::endl;
  return 0;
}
