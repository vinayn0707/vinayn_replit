#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


 
int main()
{
   // initialze vector's
    vector<int> arr = {1,2,3,4};
    for(int i=0 ; i < arr.size(); i++)
    {
	    cout<<arr[i]<<endl;
    }

    arr.insert(arr.end(),5);
    for(auto it:arr)
    {
	    cout<<it<<endl;
    }
    for_each(arr.begin(),arr.end(),[](int a){cout<<" For each: "<<a+1<<endl;});
}
