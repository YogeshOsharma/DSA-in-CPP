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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* t1 = head;
        ListNode* t2 = head;
        ListNode* t3 = NULL;
       for(int i=1;i<k;++i)
       {
        t1=t1->next;
       }
       t3=t1;
       while(t1->next)
       {
        t1=t1->next;
        t2=t2->next;
       }
       swap(t3->val,t2->val);
       return head;
    }
};