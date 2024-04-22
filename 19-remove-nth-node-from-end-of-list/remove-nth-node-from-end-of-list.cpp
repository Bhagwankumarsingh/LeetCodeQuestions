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
        // find the length of the linkedlist;
        ListNode* temp=head;
        int l=0;
        while(temp!=NULL){
           l++;
           temp=temp->next;
        }

        int traversetill=l-n-1;
        int i=0;
        ListNode* curr=head;
        if(traversetill==-1){
            head=head->next;
            delete(curr);
            return head;
        }
        while(i<traversetill){
            curr=curr->next;
            i++;
        }
        ListNode* t=curr->next;
        curr->next=t->next;
        delete t;
        return head;
    }
};