class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat[0].size();
        int n=mat.size();
         vector<vector<int>> ans(r,vector<int> (c));
        int row=0,col=0;
        if(m*n!=r*c)
            return mat;
        
          for(int i=0;i<mat.size();i++)
          {
               for(int j=0;j<mat[0].size();j++)
               {
                  ans[row][col]=mat[i][j];
                  col++;
                  if(col==c)
                  {
                      row++;
                      col=0;
                  }
               }       
          }
        
        return ans;
        
    }
};