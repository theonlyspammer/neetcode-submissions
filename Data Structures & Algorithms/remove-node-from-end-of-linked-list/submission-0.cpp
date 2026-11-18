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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n == 0 || head == nullptr) return head;

        ListNode* h1 = head;
        ListNode* h2 = head;

        int i = 0;
        while(h1 != nullptr) {
            i++;
            h1 = h1->next;
        }

        int j = i - n;

        if(j == 0) return head->next;

        while(j > 1) {
            h2 = h2->next;
            j--;
        }

        ListNode* temp = h2->next;
        h2->next = temp->next;

        return head;
    }
};
