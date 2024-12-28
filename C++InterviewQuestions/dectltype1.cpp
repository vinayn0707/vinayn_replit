// C++ program to demonstrate use of decltype
#include <bits/stdc++.h>
using namespace std;

int fun1() { return 10; }
char fun2() { return 'g'; }

int main()
{
    // Data type of x is same as return type of fun1()
    // and type of y is same as return type of fun2()
    decltype(fun1()) x ;
    decltype(fun2()) y;

   // x ="22"; // Error , x is  of type int .
   x  = 50;
    cout << typeid(x).name() <<" "<< x<<endl;
    cout << typeid(y).name() << endl;

    return 0;
}
