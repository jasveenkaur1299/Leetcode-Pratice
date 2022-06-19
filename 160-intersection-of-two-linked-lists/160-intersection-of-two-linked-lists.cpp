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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* temp1=headA;
    ListNode* temp2=headB;
    ListNode* temp3=headB;
        int count1=0;
        int count2=0;
        if(!headA||!headB)
            return NULL;
        while(temp1!=NULL)
        {
            count1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            count2++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        if(count2>count1){
        while(temp1!=NULL){
            temp3=temp2;
            while(temp3!=NULL)
            {
                if(temp1==temp3)
                    return temp1;
                else
                {
                    //cout<<temp1->val<< " "<<temp3->val <<" not match"<<endl;
                    temp3=temp3->next;
                }
            }
            temp1=temp1->next; 
            temp2=temp2->next;
        }}
        else{
        while(temp2!=NULL){
            temp3=temp1;
            while(temp3!=NULL)
            {
                if(temp2==temp3)
                    return temp2;
                else
                {
                    //cout<<temp1->val<< " "<<temp3->val <<" not match"<<endl;
                    temp3=temp3->next;
                }
            }
            temp1=temp1->next; 
            temp2=temp2->next;
        }}
        return NULL;   
    }
};