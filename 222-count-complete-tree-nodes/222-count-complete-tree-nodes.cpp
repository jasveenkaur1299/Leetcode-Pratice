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
    int countNodes(TreeNode* root) 
    {
         if(root==NULL)return 0;
        TreeNode* node1=root->left;
        TreeNode* node2=root->right;
        
        int h=1;
        bool full=false;
        while(1){
            if(node1==NULL && node2==NULL){
                full=true;break;
            }
            if(node1==NULL || node2==NULL){
                break;
            }
            node1=node1->left,node2=node2->right;
            h++;
        }
        if(full){
            return pow(2,h)-1;
        }
        else{
            return 1+countNodes(root->left)+countNodes(root->right);
        }
    
    }
};