#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>& nums) {
        // find  smallest number postion  . 
        // check if number's after and before are sorted indivisually  .

        int  mid =0;
        for( int i =0; i < nums.size() -1;i++)
        {
            if(nums[i]> nums[i+1] && ( nums[i]!= nums[i-1] && nums[i]!= nums[i+1]))
               mid  = i+1;
            //else if(nums[i]>nums[i+1] && ( i > 0 && nums[i]!= nums[i-1]))
             //    mid  = i+1;
        }
        std::cout<<"Mid: "<<mid<<std::endl;
       if( mid == 0 && mid == nums.size() -1)
       return true;
       for( int i =0; i <mid-2&& mid  > 1 ;i++)
        {
            if(nums[i]> nums[i+1])
             return false;              
           
        }

        for( int i =mid; i < nums.size() -1;i++)
        {
            if(nums[i]> nums[i+1])
             return false;              
           
        }
         if( mid > 0 && nums[mid -1] < nums[nums.size()-1])
           return false ;
       return true;

    }

int main()
{
  vector<int> array={5,1,2,3,4};
for(int  i =0; i<array.size();i++)
    std::cout<<array[i]<<std::endl;
  cout<<check(array)<<endl;;

  
    
  return 0;
}