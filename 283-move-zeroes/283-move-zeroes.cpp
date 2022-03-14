class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
       int left=0,right=0;
        if(nums.size()<=1)
            return;
       while(right<nums.size())
       {
           if(nums[right]!=0)
           {
              swap(nums[right],nums[left]);
              ++left;
               ++right;
           }
          else
           {
               ++right;
           }
           
       }
    }
};