#include<iostream>


class TwoStack
{

private :
int *arr;
int  size1, size2;
int arrySize;
public:

  TwoStack(int n)
  {
    arrySize = n;

    arr = new int[n];
    size1 = n/2 + (n%2);
    size2= n/2 -1 +(n%2);


  }

  void Push1(int a)
  {
 
 if (size1>0)
 {
  size1--;
  arr[size1 ] = a;
  
 }
 else
 {

   std::cout<<"stack1 is  FUll"<<std::endl;

 }    

  }

void Push2(int a)
{
 if(size2 < arrySize -1)
 {
   size2++;
   arr[size2] = a;
      

 }
  else 
  {
     std::cout<<"stack2 is full  "<<std::endl;
  }


}


void Pop1()
{

if(size1 <arrySize/2)
{

  arr[size1] = 0;
  size1++;
}
else
{

  std::cout<<"stack1 is empty"<<std::endl;
}

}


void Pop2()
{

if(size2 <= arrySize)
{
  
  arr[size2 ] = 0;
  size2--;
 
}
else
{

  std::cout<<"stack2 is empty"<<std::endl;
}

}

void displayStack(int type)
{
  if( type == 1)
  {
     for (int  i =size1;i <arrySize/2+1;i++)
     {
         std::cout<<"array value at "<<i << " is "<<arr[i ]<<std::endl;
     }
  }
  else if(type == 2)
  {
     for (int  i =size2;i> arrySize/2 ;i--)
     {
         std::cout<<"array value at "<<(i  ) << " is "<<arr[i ]<<std::endl;
     }
  }
  else
  {
    std::cout<<"invalid input provide  input as 1 or 2"<<std::endl;
  }

    


}

};


class TwoStackOptimized
{

private :
int *arr;
int  top1, top2;
int arrySize;
public:

  TwoStackOptimized(int n)
  {
      arr = new int[n];
      arrySize = n;
       top1 = -1;
       top2 = n;

  }



  void Push1(int a)
  {
 
 if (top1<top2)
 {
  top1++;
  arr[top1 ] = a;
  
 }
 else
 {

   std::cout<<"stack1 is  FUll"<<std::endl;

 }    

  }


  void Push2(int a)
  {
 
 if (top2>top1)
 {
  top2--;
  arr[top2 ] = a;
  
 }
 else
 {

   std::cout<<"stack1 is  FUll"<<std::endl;

 }    

  }

void displayStack(int type)
{
  if( type == 1)
  {
     for (int  i =top1;i >=0;i--)
     {
         std::cout<<"array value at "<<i << " is "<<arr[i ]<<std::endl;
     }
  }
  else if(type == 2)
  {
     for (int  i =top2;i< arrySize;i++)
     {
         std::cout<<"array value at "<<(i  ) << " is "<<arr[i ]<<std::endl;
     }
  }
  else
  {
    std::cout<<"invalid input provide  input as 1 or 2"<<std::endl;
  }

    


}


};
int main()
{

TwoStack st(10);
st.Push1(1);
st.Push1(100);
st.Push1(1000);
st.Push1(10000);
st.Push1(100000);
st.Push1(1000000);
st.displayStack(1);
st.Push2(10);
st.Push2(20);
st.Push2(30);
st.Push2(40);
st.Push2(50);
st.Push2(60);
//st.Pop1();
//st.Pop2();
st.Pop2();
st.Push2(23);
st.displayStack(2);
TwoStackOptimized sto(11);
sto.Push1(11);
sto.Push2(99);
sto.Push1(22);
sto.Push1(33);
sto.Push2(88);
sto.Push1(40);
sto.Push1(44);
sto.Push1(55);
sto.Push1(66);
sto.Push1(77);
sto.Push1(80);
sto.Push1(90);
sto.Push1(111);
std::cout<<"optimized stack1"<<std::endl;
sto.displayStack(1);
std::cout<<"optimized stack2"<<std::endl;
sto.displayStack(2);




}