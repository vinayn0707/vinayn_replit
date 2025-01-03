#include <iostream>

template< typename T>
class CustomMyVector
{
private:
T *arr;
ulong capacity;
ulong length;

public:
// Create Constructor for Custom Vector what are diff ways
//  https://www.simplilearn.com/tutorials/cpp-tutorial/how-to-initialize-a-vector-in-cpp
//  https://www.geeksforgeeks.org/vector-in-cpp-stl/#common-examples-of-vector-in-c
// 1) Declaration and Intilization 
// 	1) vector<int> arr
// 	2) vector<int>  arr = {1,2,3,4,5};
// 	3) vector<int> arr(5, 0);
// 	4) vector<int> arr{1,2,3,4,5};
// 	5) vector<int> arr1(arr, arr+ arr.size());
// 	6) vector<int> arr1(arr.begin(), arr.end());
// 	7) vector<int> arr(6);
// 	8) fill(arr.begin(),arr.end(),0);

// 2) Access the Elements. 
// 3) Updating Elements .
// 4) Traversing vector.
// 5) Inserting Elements
// 6) Deleting Elements .
// 7) check if vector is empty
// 8) Find the size of the vector.
// 9) Resize vector.
// 10) Revere the Vector .
// 11) Sort the vector in the Ascending Order .
// 12) Sort the vector in the Descending Order .
// 13) Different ways to copy vector.
// 14) Swap two Vector . 
// 15) Remove duplicates from vector .
//
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
