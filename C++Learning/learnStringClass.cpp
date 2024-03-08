#include <iostream>
#include<string>
#include<vector>
#include<algorithm>

using  namespace std;

int  main()
{

  string str="vinay";
  cout<<str<<endl;
  string *str1 = new string();
  *str1= "Rochak";
  cout<<str1<<"\t"<<*str1<<endl;
  vector<string> strArray;
  strArray.push_back("xyz");
  strArray.push_back("xab");

  cout<<strArray[0]<<endl;
  for (int i =0 ; i <strArray.size();i++)
  {
    cout<<strArray[i]<<endl;
    sort(strArray[i].begin(),strArray[i].end());
    cout<<strArray[i]<<endl;
  }
   string  s3="Mr ";
   //getline(cin,s3);
   //cout<<s3<<endl;
   string s1, s2;

   s1="vinay";
   s2=" Nanjundappa";

   s3 += s1+s2;
   cout<<s3<<endl;
  return 0;
}
