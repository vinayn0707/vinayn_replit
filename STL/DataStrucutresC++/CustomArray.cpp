#include <algorithm>
#include <iostream>
#include <queue>
#include <exception>
template < class T, int i>
class myArray {
 T array[i]; 
  ulong arraySize ;
public:

 myArray()
{
   arraySize = i; 
}
//template<typename T, int i>
 myArray(std::initializer_list<T> il)
{
   // unsigned long size = il.size();
    int in = 0;
    for (const T& arr : il)
        {
        array[in] = arr;
            in++;
            }
   arraySize = in; 
}
~myArray()
{
    std::cout<<"~myArray destructer is called "<<std::endl;
}
T at(size_t index)
{
    try {
    if ( index > this->size())
    {
        throw std::invalid_argument("array index  is more then  actual size "); 
    }
    else
    {
        return array[index];
    }
        }
        catch(std::invalid_argument& ex)
        {
            std::cout<< ex.what();
        }
}

T back()
{

    return array[this->size() -1];
    
}


T front()
{
    return array[0];
}
T & data()
{
    return array;
}
ulong size()
{

    return arraySize;
}
T &operator[](size_t index)
{
    return array[index];
}

void display()
{
    for (ulong j =0 ; j< arraySize; j++)
        std::cout<<"array["<<j<<"] : "<<array[j]<<std::endl;
}
};


int main()
{
   
     myArray<int , 5>  intArray= {1,2,3,4,5};

    intArray.display();
    std::cout<<intArray.at(6)<<std::endl;
    std::cout<<intArray.front()<<std::endl;
    std::cout<<intArray.back()<<std::endl;
    std::cout<<" exiting  main"<<std::endl;   
    return 0;
}
