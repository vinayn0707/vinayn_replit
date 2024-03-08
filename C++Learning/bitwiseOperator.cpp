#include <iostream>
#include <bitset>

using namespace std;


int  main()
{

unsigned int  value1 {0x3};
unsigned int  value2 = {0x09};

unsigned int value3 ;

value3 = value1 & value2;
cout<<bitset<8>(value1)<<endl<<bitset<8>(value2)<<endl;
cout<<bitset<8>(value3)<<endl;

cout<<bitset<8>( value1|value2)<<endl;
cout<<bitset<8>(value1^value2)<<endl;
cout<<bitset<8>(~value1)<<endl;

value1<<= 2;
cout<<bitset<8>(value1)<<endl;

value2>>= 2;
cout<<bitset<8>(value2)<<endl;




  return 0;
}