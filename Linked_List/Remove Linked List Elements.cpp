link-https://leetcode.com/problems/remove-linked-list-elements/

Example 1:

Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]
Example 2:

Input: head = [], val = 1
Output: []

``````````

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr){
            return head;
        }
        while(head!=nullptr && head->val==val){
            head = head->next;
        }
        ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr!=nullptr){
            if(curr->val==val){
                prev->next=curr->next;
                curr=curr->next;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};
