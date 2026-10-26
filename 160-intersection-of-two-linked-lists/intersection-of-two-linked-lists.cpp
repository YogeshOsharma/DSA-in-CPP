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

    int count(ListNode* head)
    {
        if(head==NULL) return 0;
        return 1 + count(head->next);
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t1 = headA;
        ListNode* t2 = headB;

        int l1 = count(headA);
        int l2 = count(headB);

        int k = abs(l1-l2);
        if(l1>l2)
        {
            while(k--)
            {
                t1=t1->next;
            }
        }
        else if(l2>l1)
        {
            while(k--)
            {
                t2=t2->next;
            }
        }
        while(t1!=t2)
        {
            t1=t1->next;
            t2=t2->next;
        }
        if(t1==NULL || t2==NULL) return NULL;
        return t1;


    }
};