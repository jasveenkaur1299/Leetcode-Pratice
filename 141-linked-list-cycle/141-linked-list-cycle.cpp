/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> set;
        if(head==NULL ||head->next==NULL)
            return false;
        ListNode*temp=head;
        while(temp!=NULL)
        {
           // cout<<temp->val<<" ";
            if(set.find(temp)!=set.end())
                return true;
            else
                set.insert(temp);
            temp=temp->next;
        }
        return false;
        
    }
};