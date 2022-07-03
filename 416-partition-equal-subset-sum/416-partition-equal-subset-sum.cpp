class Solution {
public:
    
        
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
       
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
         
        if(sum%2!=0)
            return false;
        else{
            sum=sum/2;
        vector<vector<int>> dp(n+1,vector<int> (sum+1,-1));    
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)
                    dp[i][j]=0;
                if(j==0)
                    dp[i][j]=1;
            }
        }
            for(int i=1;i<n+1;i++)
            {
                for(int j=1;j<sum+1;j++)
                {
                    if(nums[i-1]<=j)
                        dp[i][j]=dp[i-1][j-nums[i-1]] || dp[i-1][j];
                     else if(nums[i-1]>j)
                         dp[i][j]=dp[i-1][j];
                }
            }
            return dp[n][sum];
            
        }
        
    }
};