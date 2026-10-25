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
    vector<int> sortv(ListNode* head) {
        vector<int> v;
        ListNode* t = head;
        while (t) {
            v.push_back(t->val);
            t = t->next;
        }
        sort(v.begin(), v.end());
        return v;
    }
    ListNode* sortList(ListNode* head) {

        if (!head || !head->next)
            return head;
        vector<int> v = sortv(head);
        ListNode* t = head;
        int i = 0;
        while (t) {
            t->val = v[i++];
            t = t->next;
        }
        return head;
    }
};