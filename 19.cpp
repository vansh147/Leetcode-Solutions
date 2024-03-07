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
        int len =1;
        ListNode* temp = head;
        ListNode* todel;
        while(temp->next!= NULL){
            temp = temp -> next;
            len++;
        }
        if(len == n){
            head = head->next;
            return head;
        }
        len = len - n -1;
        temp = head;
        while(len--){
            temp = temp->next;
        }
        // todel = temp->next;
        temp->next = temp ->next->next;
        // delete todel;
        return head;
    }
};