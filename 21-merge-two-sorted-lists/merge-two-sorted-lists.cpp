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
        ListNode* L1 = list1;
        ListNode* L2 = list2;
        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        while (L1 && L2) {
            if (L1->val <= L2->val) {
                ListNode* p = new ListNode(L1->val);
                temp->next = p;
                temp = p;
                L1 = L1->next;
            } else {
                ListNode* p = new ListNode(L2->val);
                temp->next = p;
                temp = p;
                L2 = L2->next;
            }
        }
        while (L1) {
            ListNode* p = new ListNode(L1->val);
            temp->next = p;
            temp = p;
            L1 = L1->next;
        }

        while (L2) {
            ListNode* p = new ListNode(L2->val);
            temp->next = p;
            temp = p;
            L2 = L2->next;
        }
        return head->next;
    }
};