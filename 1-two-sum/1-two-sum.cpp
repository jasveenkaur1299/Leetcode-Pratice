class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            auto itr=mp.find(target-nums[i]);
            if(itr!=mp.end())
            {
               //cout<<"ansfound";
                ans.push_back(i);
               ans.push_back(itr->second);
            
               return ans;    
            }
            else
            {
                mp[nums[i]]=i;
            }
            
        }
        return ans;
        
    }
};