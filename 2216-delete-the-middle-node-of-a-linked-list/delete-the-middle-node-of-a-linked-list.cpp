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
    ListNode* deleteMiddle(ListNode* head) {

        if (head->next == NULL)
            return 0;

        ListNode* slow = head;
        ListNode* fast = head;

        ListNode* t = head;
        while (fast != NULL && fast->next != NULL) {
            if(slow!=head) t = t->next;
            slow = slow->next;
            fast = fast->next->next;
        }
        t->next = slow->next;
        return head; 

    }
};