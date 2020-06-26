ListNode* Solution::deleteDuplicates(ListNode* A) {
   ListNode* current=A;
   while(current->next){
       if(current->next->val==current->val){
           current->next=current->next->next;
       }
       else {
       current=current->next;
       }
   }
   return A; 
}
