/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    if(!A|| !A->next){
        return A;
    }
    ListNode* slow=A;
    ListNode* fast=A;
    while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* current=slow->next;
    slow->next=NULL;
    ListNode* next=NULL;
    ListNode* prev=NULL;
    while(current){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    ListNode* B=prev;
    ListNode* s=A;
    A=A->next;
    ListNode* head=s;
    while(A && B){
      
        if(B){
            s->next=B;
            s=B;
            B=B->next;
        }
          if(A){
            s->next=A;
            s=A;
            A=A->next;
        }
    }
    if(A){
        s->next=A;
        s=A;
    }
    if(B){
        s->next=B;
        s=B;
    }
    return head;
}
