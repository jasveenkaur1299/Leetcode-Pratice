class Solution {
public:
    int SubsetSum(vector<int> nums,int sum,int n,vector<vector<int>>& dp){
        if(sum==0)
            return true;
        if(n==0)
            return false;
        if(dp[n][sum]!=-1) return dp[n][sum];
        if(nums[n-1]<=sum)
        {
            return dp[n][sum]=SubsetSum(nums,sum-nums[n-1],n-1,dp)||SubsetSum(nums,sum,n-1,dp);
        }
        else 
            return dp[n][sum]=SubsetSum(nums,sum,n-1,dp);
    }
        
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
       
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
         
        if(sum%2!=0)
            return false;
        else{ 
            
            vector<vector<int>> dp(n+1,vector<int>(sum/2+1,-1));
            return SubsetSum(nums,sum/2,n,dp);
        }
        
    }
};