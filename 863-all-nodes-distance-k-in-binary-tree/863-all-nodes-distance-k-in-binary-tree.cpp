/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void mark_Parents(TreeNode*root,unordered_map<TreeNode*,TreeNode*>&parent)
    {
        queue<TreeNode*> queue;
        queue.push(root);
        while(!queue.empty())
        {
            TreeNode* temp=queue.front();
            queue.pop();
            if(temp->left)
            {
                parent[temp->left]=temp;
                queue.push(temp->left);
            }
            if(temp->right)
            {
                parent[temp->right]=temp;
                queue.push(temp->right);
            }
        }
        
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
       vector <int> result;
       unordered_map<TreeNode*,TreeNode*> parent;
       mark_Parents(root,parent);
       unordered_map<TreeNode*,bool> visited;
       int curr_level=0;
       queue<TreeNode*>queue;
        queue.push(target);
        visited[target]=true;
        while(!queue.empty())
        {
            
            int size=queue.size();
            if(curr_level==k) break;
            curr_level++;
            for(int i=0;i<size;i++)
            {
                TreeNode* curr=queue.front();
                queue.pop();
                if(curr->left && !visited[curr->left])
                {
                    queue.push(curr->left);
                 visited[curr->left]=true;
                }
                if(curr->right && !visited[curr->right])
                {
                    queue.push(curr->right);
                  visited[curr->right]=true;
                }
                if(parent[curr] && !visited[parent[curr]])
                {
                    queue.push(parent[curr]);
                  visited[parent[curr]]=true;
                }
            }
                
        }
        
        while(!queue.empty())
        {
            result.push_back(queue.front()->val);
            queue.pop();
        }
        return result;
        
        
    }
};