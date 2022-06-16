/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1=list1;
        ListNode* curr2=list2;
        ListNode dummy=ListNode(0);
        ListNode* head=&dummy;
        while(curr1!=NULL &&curr2!=NULL)
        {
            if(curr1->val<=curr2->val)
            {
                head->next=curr1;
                curr1=curr1->next;
            }
            else
            {
                head->next=curr2;
                curr2=curr2->next;
            }
            
            head=head->next;
             
        }
        if(curr1!=NULL)
            head->next=curr1;
        else
            head->next=curr2;
        
        return dummy.next;
    }
};