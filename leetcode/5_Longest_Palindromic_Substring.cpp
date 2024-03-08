#include <iostream>
#include<string>
#include<algorithm>
size_t expandAroundCentre(std::string s, size_t left, size_t right)
{
  int L = left, R = right;
  while(L >= 0 && R < s.size() && s[L] == s[R] )
    {
      L--;
      R++;
    }
  return R - L - 1;
}
std::string longestPalindrome(std::string s)
{
  if( s.size() == 0)
    return {};
  size_t start=0, end =0;
  for(int i =0;i<s.size();i++)
    {
      int len1 =  expandAroundCentre(s, i,i);
      int len2 = expandAroundCentre(s,i, i+1);
      int len = std::max(len1, len2);
      if(len > start+end+1)
      {
        start = i - (len -1)/2;
        end = i+ (len + 1)/2;
      }
      
    }

  return s.substr(start, (end - start) + 1);
}



int main()
{
std::string str="a";
  while(1)
    {
  std::cout<<" Enter string: ";
  std::cin>>str;
std::cout<<" longest palindrome: "<<longestPalindrome(str)<<std::endl;
      }
	return 0;
}
