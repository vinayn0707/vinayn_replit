#include <iostream>
#include<optional>
using namespace std;


int main()
{

  optional<nt> var{20};

  cout<<"Var "<<var.value()<<endl;

  return 0;
}