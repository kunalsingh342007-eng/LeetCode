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
    ListNode* partition(ListNode* head, int x) {
       

        if(head==nullptr||head->next==nullptr){
            return head;
        }
 ListNode * dummy = new ListNode(0);
        dummy->next= head;

        ListNode* pivot=dummy;
        ListNode* curr=dummy;
        while(curr->next!=nullptr){
            if(curr->next->val<x){
                if(curr==pivot){
               pivot=pivot->next;
               curr=curr->next;}

           else{
            ListNode* moveNode=curr->next;
            curr->next=moveNode->next;
                moveNode->next=pivot->next;
                pivot->next=moveNode;
                pivot=pivot->next;}}
            

            else{
                curr=curr->next;
            }
        }
        ListNode* newHead=dummy->next;
        delete dummy;
        return newHead;
        return dummy->next;
    }
};