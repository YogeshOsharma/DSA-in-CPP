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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head) return NULL;
        ListNode* p1 = head;
        for(int i=1;i<k;++i)
        {
            if(!p1) return head;
            p1=p1->next;
        }
        if(!p1) return head;

        ListNode* start=p1->next;
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr!=start)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev=curr;
            curr=next;
        }
        head->next=reverseKGroup(start,k);
        return prev;
    }
};