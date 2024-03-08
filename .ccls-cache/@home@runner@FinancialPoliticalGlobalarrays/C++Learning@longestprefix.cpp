#include <iostream>
#include<string>
#include<vector>
#include<algorithm>

using  namespace std;

string longestPrefixInArray(vector<string> &arr)
{

string temp= "";
string min  = *min_element(arr.begin(),arr.end());
for (int i=0;i<min.size();i++)
{
  for(int j = 0; j < arr.size();j++)
  {
    if (min[i]!= arr[j][i])
       return temp;
       
  }

temp.push_back(min[i]);
}

return temp;
}

int main()
{
  vector<string> strs = {"abc", "abcd","abcde","abcde"};

  string  longestPreStr = longestPrefixInArray(strs);

  cout<<"longest pre string"<<longestPreStr<<endl;
  return 0;

 
}