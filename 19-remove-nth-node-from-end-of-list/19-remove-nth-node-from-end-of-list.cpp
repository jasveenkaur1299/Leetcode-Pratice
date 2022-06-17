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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(head==NULL || head->next==NULL)
            return NULL;
        int count=0;
        ListNode* temp=head;
       while(temp!=NULL)
       {
         count++;
           temp=temp->next;
       }
        if(count==n)
      {
          ListNode *node=head;
          head=head->next;
          delete node;
          return head;
      }
       int difference = count - n;
      int counter=1;
      temp=head;
      while(counter!=difference)
      {
          counter++;
          temp=temp->next;
      }
        
        temp->next=temp->next->next;
        return head;
    
        
    }
};