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
        if(head==NULL || head->next==NULL) return head;

        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* t=new ListNode(curr->val);
            t->next=prev;
            prev=t;
            curr=curr->next;
        }
        while(prev!=NULL && head!=NULL){
            if(prev->val != head->val){
                return false;
            }
            prev=prev->next;
            head=head->next;
        }
        return true;
    }
};