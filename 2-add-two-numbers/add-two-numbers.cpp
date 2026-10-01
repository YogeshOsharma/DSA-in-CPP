
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = l1;
        ListNode* t2 = l2;

        ListNode* head = NULL;
        ListNode* temp = NULL;

        int carry = 0;

        while (t1 != NULL || t2 != NULL || carry != 0) {
            int a = 0, b = 0;

            if (t1 != NULL) {
                a = t1->val;
                t1 = t1->next;
            }

            if (t2 != NULL) {
                b = t2->val;
                t2 = t2->next;
            }

            int sum = a + b + carry;
            carry = sum / 10;

            ListNode* p = new ListNode(sum % 10);

            if (head == NULL) {
                head = p;
                temp = p;
            } else {
                temp->next = p;
                temp = p;
            }
        }

        return head;
    }
};
