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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev=head;
        if(!head)
            return head;
        ListNode* cur=head->next;
        while(cur){
            if(cur->val==prev->val){
                prev->next=cur->next;
                cur=prev->next;
            }
            else{
                prev=prev->next;
                cur=cur->next;
            }
        }
        return head;
    }
};
