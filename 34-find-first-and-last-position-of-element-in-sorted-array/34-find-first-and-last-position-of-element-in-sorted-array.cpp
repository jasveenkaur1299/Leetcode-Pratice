class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int start=0;
        int end=nums.size()-1;
        vector<int> ans;
         int res=-1;
        while(start<=end){
            int mid=start+ (end-start)/2;
            if(nums[mid]==target)
            {
                end=mid-1;
                res=mid;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        ans.push_back(res);
        start=0;
        end=nums.size()-1;
        res=-1;
        while(start<=end){
            int mid=start+ (end-start)/2;
            if(nums[mid]==target)
            {
                start=mid+1;
                res=mid;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        ans.push_back(res);
         return ans; 
    }
};