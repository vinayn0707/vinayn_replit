// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstring>
using  namespace std;

template<typename T>
T maximum (T a, T b)
{
    return ( a>b?a:b);

}

template<>
const char * maximum<const char *>(const char* a, const char* b)
{
    
return  strcmp(a,b)?a:b;
}

int main() {
    // Write C++ code here
    std::cout << "Hello world!";


const char* a{"vinay"};
const char * b{"Binay"};

cout<<maximum<const char*>(a, b)<<endl;

    return 0;
}