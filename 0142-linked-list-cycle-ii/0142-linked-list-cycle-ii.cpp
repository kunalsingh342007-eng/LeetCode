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
    ListNode *detectCycle(ListNode *head) {
      ListNode* s=head;
      ListNode* f=head;
      

      while(f!=NULL&&f->next!=NULL) {
        s=s->next;
        f=f->next->next;

        if(s==f){
           ListNode* p=head;
            
        
        while (p != s) {
                    p = p->next;
                    s= s->next;
                    
                }
                return p; 
      }}
      return NULL; 
    }
};