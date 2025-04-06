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
    bool isPalindrome(ListNode* head) {
        vector<int> vecNodes;
        ListNode* temp = head;

        while (temp != NULL) {
            vecNodes.push_back(temp->val);
            temp = temp->next;
        }
        for (int i = 0; i < vecNodes.size(); i++) {
            if (vecNodes[i] != vecNodes[vecNodes.size()-i-1]) return false;
        }

        return true;
    }
};