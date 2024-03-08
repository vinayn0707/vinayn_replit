#include <iostream>
#include<memory>
#include "SmartPointer.h"
using namespace std;
extern int add();

int main() {
  std::cout << "Hello World!\n";
  // Add 2 number 
  //add();
// Smart pointer 
// Unique pointer 
  unique_ptr<Rectangle> p1( new  Rectangle(10,5));

  unique_ptr<Rectangle> p2;

  p2 =move(p1);
  cout<<"Uique pointer p2 Area "<<p2->area()<<endl;
  // shared  pointer 
   shared_ptr<Rectangle> x1(new Rectangle (10,5));

   shared_ptr<Rectangle> x2;
   x2 =x1;
   x1->setLength(20) ;
   x1->setBreadth(30);
   cout<<" Shared pointer x2 area="<<x2->area()<<"\t"<<"x1 area ="<<x1->area()<<endl;
   cout<<" refrence Count"<<x2.use_count()<<endl;
  // weak pointer 

  
  return  0;
}