#include<iostream>
#include <vector>
using namespace std;



int main()
{
   vector<int> v,v1;

   for(int a =0 ;a<10;a++)
      v1.push_back(a+10);

   v.push_back(10);
   v.push_back(20); // size of vector is  incresesed 
   v.push_back(30); 
  cout<<"size of vector is " <<v.size()<<"vector front = "<<v.front()<<endl;
  cout<<" vector back= "<<v.back()<<endl;
  swap(v,v1);
 // v.insert(0,100) <<endl;
   cout<<v.at(0)<<endl;
   //v.pop_back();
   //v[1] = 50; // Wrong  size of vector is  1
   //v.clear(); // clear's  vector
   v.erase(v.begin());
      cout<<v.at(0)<<endl;

   


}
