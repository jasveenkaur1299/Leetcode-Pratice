class Solution {
public:
    int f(int ind,vector<int>&dp){
        int right=0,left=0;
      if(ind==0|| ind==1)
          return 1;
      if(dp[ind-1]!=-1) 
          left= dp[ind-1]; 
      else left=f(ind-1,dp);
      if(ind>1){
          if(dp[ind-2]!=-1) 
             right = dp[ind-2];
              else
                  right=f(ind-2,dp);
      }
        return dp[ind]=left+right;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return f(n,dp);
    }
};