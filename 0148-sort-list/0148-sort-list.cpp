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
    ListNode* sortList(ListNode* head) {
        vector<int> store;
        ListNode* temp = head;
        while (temp != nullptr) {
            store.push_back(temp->val);
            temp = temp->next;
        }
        sort(store.begin(), store.end());

        temp = head;
        for (int i = 0; i < store.size(); i++) {
            temp->val = store[i];
            temp = temp->next;
        }
        return head;
    }
};