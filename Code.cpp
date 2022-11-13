
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
        ListNode* ptr1 = headA, *ptr2 = headB;
        if(ptr1 == NULL && ptr2 == NULL) {
            return NULL;
        }
        if(ptr1 == ptr2) {
            return ptr1;
        }
        while(ptr1 != ptr2) {
            if(ptr1 == NULL) {
                ptr1 = headB;
            }
            else {
                ptr1 = ptr1 -> next;
            }
            if(ptr2 == NULL) {
                ptr2 = headA;
            }
            else {
                ptr2 = ptr2 -> next;
            }
        } 
        return ptr1;
    }
};
