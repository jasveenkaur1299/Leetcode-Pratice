class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
     vector<int> ans;
        unordered_map<int,int> mp1;
        for(int i=0;i<nums1.size();i++)
        {
            mp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(mp1.find(nums2[i])!=mp1.end())
            {
                ans.push_back(nums2[i]);
                mp1[nums2[i]]--;
                if(mp1[nums2[i]]==0)
                    mp1.erase(nums2[i]);
            }
        }
        
       
     return ans;   
        
    }
};