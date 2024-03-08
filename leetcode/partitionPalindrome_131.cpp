#include <iostream>
#include<vector>
#include <cstring>

bool isPalindrome( int first, int last, std::string s)
{

  while( first<=last)
    {
      if(s[first++] != s[last--])
        return false;
    }
  return true;
}

void dfs (std::vector<std::vector<std::string> > &output, std::string &s ,int start,std::vector<std::string> & currentList)
{
    if(start >= s.length())
    {
      output.push_back(currentList);
    }
   for( int end = start;end < s.length();end++)
     {
       if(isPalindrome(start,end,s))
       {
        currentList.push_back(s.substr(start, end-start+1));
         dfs(output,s,end +1,currentList);
         currentList.pop_back();
       }
     }
  
}

std::vector<std::vector<std::string>> partitionPalindrome(std::string & s)
{
   std::vector<std::vector<std::string> >pal{};
    std::vector<std::string> currentList{};
   dfs(pal,s,0,currentList);
  
  
  return pal;
  
}

int main()
{

  std::string str{"abcdc"};

  std::vector<std::vector<std::string>> output = partitionPalindrome(str);
  
  for(auto it = output.begin();it != output.end();++it)
    {
      std::cout<<std::endl;
      for(auto it1=(*it).begin(); it1 != (*it).end();it1++)
      std::cout<<*it1<<"\t";
    }
  
}















