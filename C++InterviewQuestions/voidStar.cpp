#include<iostream>
using namespace std;


int main()
{
	// static_cast from int , char , any structure pointer to void * is allowed .
	//int  *a = new int(10);
	volatile static int  *a = new int(10);
	//const int  *a = new int(10); // not allowed to cast  const int * to void *
        
	*a = 20;
	void *ptr = static_cast<void *>(a);

	cout<<ptr<<" : "<<*(int *)ptr<<endl;
	// simalrrly try this with simple strcutre  .
	return 0;
}
