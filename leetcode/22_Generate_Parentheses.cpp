#include<iostream>
#include<vector>
#include<string>
void backtrack(int  l, int r, int n, std::string& bt, std::vector<std::string>& res)
    {
        std::cout<<bt<<l<<r<<std::endl;
        if (l == r && r == n)
        {
            res.push_back(bt);
            return;
        }
        
        if (l < n)
        {
            bt += "("; // Ot(1)
            
            backtrack(l + 1, r, n, bt, res); // Ot(n^2), Os(n)
            
            bt.erase(bt.length() - 1); // Ot(1)
        }
       
        if (r < l)
        {
            bt += ")";
            
            backtrack(l, r + 1, n, bt, res); // Ot(n^2), Os(n)
            
            bt.erase(bt.length() - 1);
        }
        
        std::cout<<"end of the fun"<< bt<<l<<r<<std::endl;
    }
std::vector<std::string> generateParenthesis(int n) {
        std::string bt; // Os(n)
        std::vector<std::string> res;
        
        bt.reserve(n * 2);
        
        backtrack(0, 0, n, bt, res); // Os(n)
        
        return res;
    }
    
    

int main()
{
   std::vector<std::string> res = generateParenthesis(2);
  std::cout<<" output res"<<std::endl;
    for (auto i = res.begin(); i!= res.end(); ++i)
        std::cout<<*i<<std::endl;
    return 0;
}
