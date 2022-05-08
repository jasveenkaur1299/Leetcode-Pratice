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
    vector<int> inorderTraversal(TreeNode* root) 
    {
      stack <TreeNode*> stk;
      vector<int> ans;
      if(root==NULL)
          return ans;
        TreeNode* curr=root;
        while(true)
        {
            while(curr)
            {
            stk.push(curr);
            curr=curr->left;
            }
            if(stk.empty()) {break;}
        
                
                TreeNode* popped=stk.top();
            stk.pop();
                ans.push_back(popped->val);
                curr=popped->right;
        
}
        return ans;
    }
        
};