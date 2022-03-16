class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(); 
        int m=matrix[0].size();
        int i=0,j=m-1;
        
        while(i<=n-1 && j>=0)
        {
            if(target==matrix[i][j])
                return true;
            if(target>matrix[i][j])
                i++;
            else
                j--;
        }
        if(i>n-1 || j<0)
            return false;
        return true;
    }
};