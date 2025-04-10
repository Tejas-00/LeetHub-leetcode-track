class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // First pass: count total nodes
        int count = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // If we need to remove the head
        if (count == n) {
            return head->next;
        }

        // Second pass: go to the (count - n - 1)th node
        temp = head;
        for (int i = 1; i < count - n; i++) {
            temp = temp->next;
        }

        // Remove the nth node from the end
        if (temp->next != nullptr) {
            temp->next = temp->next->next;
        }

        return head;
    }
};
