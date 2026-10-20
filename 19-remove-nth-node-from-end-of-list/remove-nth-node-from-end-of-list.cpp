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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next&&n==1) return NULL;
        ListNode* t1=head;
        ListNode* t2=head;
        ListNode* t3=head;
        while(n!=1)
        {
            t1=t1->next;
            n--;
        }
        if(!t1->next)
        {
            head=head->next;
            return head;
        }
        while(t1->next)
        {
            t1=t1->next;
            t3=t2;
            t2=t2->next;
        }
        t3->next=t2->next;
        delete t2;
        return head;
    }
};