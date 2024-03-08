#include <iostream>
#include <bitset>
using namespace std;

int main()
{

unsigned char ch={251};

cout<<"data= "<<static_cast<int>(ch)<<endl;
ch++;
cout<<"data= "<<static_cast<int>(ch)<<endl;
ch++;
cout<<"data= "<<std::hex<<static_cast<int>(ch)<<endl;
ch++;
cout<<"data= "<<std::dec<<static_cast<int>(ch)<<endl;
ch++;
cout<<"data= "<<static_cast<int>(ch)<<endl;
ch++;
cout<<"data= " <<static_cast<int>(ch)<<endl;
--ch;
cout<<"data= "<<static_cast<int>(ch)<<endl;
ch++;

unsigned short  data ={1234};

cout<<"data(bin)"<<bitset<16>(data)<<endl;

///shift operation  


unsigned  int  value  = {2};

cout<<"data(bin)"<<bitset<16>(value)<<endl;
cout<<"data(dec)"<<(value)<<endl;
value  = value  <<4;
//value  = value  <<1;
//value  = value  <<1;
cout<<"data(dec)"<<(value)<<endl;
value  = value  >>1;
cout<<"data(dec)"<<(value)<<endl;

unsigned  int  value1  = {2};
for  (int i =1;i< 4;i++)
   value1 = value1*i;

cout<<"data(dec)"<<value1<<endl;
}