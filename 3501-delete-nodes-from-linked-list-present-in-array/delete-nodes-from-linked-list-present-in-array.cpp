class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st(nums.begin(), nums.end());

        ListNode dummy(0, head);   
        ListNode* p = &dummy;
        ListNode* c = head;

        while (c) {
            if (st.count(c->val)) {
                c = c->next;
                p->next = c;    
            } else {
                p = c;
                c = c->next;
            }
        }
        return dummy.next;
    }
};