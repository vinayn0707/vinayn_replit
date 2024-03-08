#include<iostream>
using namespace std;

int main()
{
 /* auto fun = [](auto a , auto b)
    {
        return a+ b;
    };
*/
    auto fun = []<typename T , typename P>( T a, P b)
    {
      static_assert(is_integral_v<T>,"send only intger value ");
      return a + b;
    };
    double a = 10;
    double b = 20.0;

    auto res = fun(a, b);
    cout<<" res "<<res<<endl;
    cout<<"size "<<sizeof(res)<<endl;

    cout<<boolalpha<<endl;
    cout<<is_integral<int>::value<<endl;
    cout<<is_floating_point<int>::value<<endl;
    
}