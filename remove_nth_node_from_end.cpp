/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
   int l=0,count=0;
 
   ListNode* current=A;
   while(current){
       l++;
       current=current->next;
   }
     if(l==1){
       return NULL;
   }
   
   current=A;
   if(B>=l){
    A=A->next;   
   }
  while(current && count<(l-B-1)){
       current=current->next;
       count++;
   }
   current->next=current->next->next;
   //current->next=NULL;
   return A;
}
