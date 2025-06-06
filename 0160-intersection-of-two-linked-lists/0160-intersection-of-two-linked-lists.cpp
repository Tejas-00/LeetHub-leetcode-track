/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;

        int count1 = 0;
        int count2 = 0;
 
        while (temp1 != NULL) {
            count1++;
            temp1 = temp1->next;          
        }
        while (temp2 != NULL) {
            count2++;
            temp2 = temp2->next;          
        }

        int diff = abs(count1-count2);
        if (count1 > count2) {
            while (diff) {
                headA = headA->next;
                diff--;
            }
        }
        else {
            while (diff) {
                headB = headB->next;
                diff--;
            }
        }

        while (headA != NULL) {
            if (headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }

        return NULL;
    }
};