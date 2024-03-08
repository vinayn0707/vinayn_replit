#include <iostream>

template< typename T>
class CustomMyVector
{
private:
T *arr;
ulong capacity;
ulong length;

public:

CustomMyVector();
CustomMyVector(std::intilize_list lt);
void push_back();
void pop_back()
ulong size();
ulong capacity();
void reserve();
 T front();
 T back();

};

int main()
{
  CustomMyVector<int> nu;
  
  return 0;
}