class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int start=0;
        int n=matrix.size();
        int m=matrix[0].size();
        int end=n*m -1;
        int mid=start+(end-start)/2;
        while(start<=end)
        {
            mid=start+(end-start)/2;
             if(matrix[mid/m][mid%m]== target)
             {
                 return true;
             }
            if(matrix[mid/m][mid%m] > target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return false;
    }
};