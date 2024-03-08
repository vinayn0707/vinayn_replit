#include<iostream>
using namespace std;

class A
{
    public:
	A() {cout<<" base calls  constructor"<<endl;}
	void func1(){cout<< "func1 in A"<<endl;}
	virtual void  func2() {cout<< "func2 in A"<<endl;}
	virtual void func3(){cout<< "func3 in A"<<endl;}
	virtual void func4(){cout<< "func4 in A"<<endl;}


};

class B: public A
{
    public:
	B(){cout<<" B base class  constrcutor"<<endl;}
	void func2() {cout<< "func2 in B"<<endl;}
	void func3(){cout<< "func3 in B"<<endl;}
	virtual void func4(int x){
	    cout<< "func4 in B"<<endl;
	    cout<<"x: "<<x<<endl;}
};

int main()
{
   A *obj1;

  cout<<"Class A size: "<< sizeof(obj1)<<endl;
  cout<<"Object derived"<<endl;
  B obj2;


  cout<<"Class B size: "<< sizeof(obj2)<<endl;
  obj1 = &obj2;
  obj1->func1();
  obj1->func2();
  obj1->func3();
//  obj1->func4(1);
  return 0;
}
