class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* res = new ListNode(0, head);
        ListNode* first = head;
        ListNode* second = res;

        while (n > 0) {
            head = head->next;
            n--;
        }
        while (head != nullptr) {
            head = head->next;
            second = second->next;
        }
        second->next = second->next->next;

        return res->next;
    }
};
