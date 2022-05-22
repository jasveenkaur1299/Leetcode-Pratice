/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
   vector<vector<int>> ans;
        if(root==NULL)
        return ans;
        
    queue<TreeNode*> q;
    q.push(root);
    bool flag=true;
    while(!q.empty())
    {
        int row_size=q.size();
        vector<int> row(row_size);
        for(int i=0;i<row_size;i++)
        { 
             TreeNode* front=q.front();
             q.pop();
            
            int index=(flag)? i: (row_size-1-i);    
            //cout<<index<<endl;
           
            
            row[index]=front->val;
           
            if(front->left) 
                q.push(front->left);
            if(front->right)
                q.push(front->right);
            
        }
         flag=!flag;
        ans.push_back(row);
       
        
    }
        return ans;
    }
};