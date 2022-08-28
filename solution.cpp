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
    ListNode* middleNode(ListNode* head) {
        ListNode* p1 = head;
        int c =0;
        while(p1 != NULL) {
            p1 = p1->next;
            c++;
        }
        ListNode* p2 = head;
        for(int i=0 ;i<c/2; i++) {
            p2 = p2->next;
        }
        return p2;
    }
};
