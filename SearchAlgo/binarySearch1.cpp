#include<iostream>


int binarySearch( int arr[], int n, int key)
{

	int f = 0;
	int e = n;
	int mid  = 0;

	while( f <= e)
	{
		mid = f + (e - f)/ 2;
		if( arr[mid] == key)
		{
			return  mid;
		}
		else if( arr[mid] > key)
		{
		 f = mid + 1;
		}
		else
	         {
			 e = mid -1;
		 }

	}

	return -1;
}


int main()
{


return 0;
}

