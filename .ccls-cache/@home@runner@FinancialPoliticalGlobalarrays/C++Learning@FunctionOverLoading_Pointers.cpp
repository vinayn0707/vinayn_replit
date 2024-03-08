#include <iostream>
using namespace std;

/*
int SumOfArray(int *Array,int n)
{
  int  nSum=0;
  
  for(int  i =0;i <5;i++)
     nSum =nSum + Array[i];
  return  nSum;
}

float SumOfArray(float *Array,int n)
{
  float  nSum=0;
  
  for(int  i =0;i <5;i++)
     nSum =nSum + Array[i];
  return  nSum;
}

*/

template <typename T>
T SumOfArray (T *Array , int n)
{

  T  nSum=0;
  
  for(int  i =0;i <n;i++)
     nSum =nSum + Array[i];
  return  nSum;
}


int main()
{
  int array[]={1,2,3,4,5};

  float array1[]={1.1, 2.2, 3.3, 4.4,5.5};


 // cout<<"Sum of  int array "<< SumOfArray(array, 5)<<endl;
  cout<<"Sum of  int array "<< SumOfArray<int>(array, 5)<<endl;

  cout<<"Sum of  float array "<< SumOfArray<float>(array1, 5)<<endl;  

  return  0;
}