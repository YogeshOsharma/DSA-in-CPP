class Solution {
public:

ListNode* merge(ListNode* head1, ListNode* head2)
	{
		ListNode* head = new ListNode(0);
		ListNode* tail = head;
		
		while (head1 && head2)
			{
			if (head1->val <= head2->val)
				{
				tail->next = head1;
				head1 = head1->next;
				tail = tail->next;
				tail->next = NULL;
			}
			else
				{
				tail->next = head2;
				head2 = head2->next;
				tail = tail->next;
				tail->next = NULL;
			}
		}
		if (head1)
			{
			tail->next = head1;
		}
		else
			{
			tail->next = head2;
		}
		return head->next;
	}

    ListNode* mergeSort(vector<ListNode*>& lists, int l, int r)
    {
        if (l == r) return lists[l];

        int mid = l + (r - l) / 2;
        ListNode* left  = mergeSort(lists, l, mid);
        ListNode* right = mergeSort(lists, mid + 1, r);
        return merge(left, right);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) return NULL;
        return mergeSort(lists, 0, lists.size() - 1);
    }
};