// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    int sum=0;
	    for(int i=0;i<n;i++)
	    sum=sum+arr[i];
	    vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
	    for(int i=0;i<n+1;i++)
	    {
	        for(int j=0;j<sum+1;j++)
	        {
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
	            if(arr[i-1]>j)
	            dp[i][j]=dp[i-1][j];
	            
	            else if((arr[i-1]<=j))
	            dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
	        }
	    }
	    vector<int>v;
	    int ans=INT_MAX;
	    for(int j=0;j<(sum+1);j++)
	    {
	         if(dp[n][j] == 1) 
	         ans = min(ans, abs(sum - 2*j));
	    } 
	    return ans;
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends