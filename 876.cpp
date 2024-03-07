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
        ListNode* temp = head;
        int len = 1;
        while(temp->next!=NULL){
            temp =temp->next;
            len++;
        }
        temp = head;
        if(len%2==1){
            for(int i=0;i<(len/2);i++){
                temp = temp ->next;
            }
            return temp;
        }
        else{
            for(int i=0;i<(len/2);i++){
                temp = temp ->next;
            }
        }
            return temp;
    }
};