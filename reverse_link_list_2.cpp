ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    ListNode* current=A;
    int count=1;
    while(current && count<B-1){
        current=current->next;
        count++;
    }
    
    ListNode* revcurr=current->next;
    current->next=NULL;
    ListNode* next=NULL;
    ListNode* prev=NULL;
    int size=C-B;
    while(revcurr && size>=0){
        next=revcurr->next;
        revcurr->next=prev;
        prev=revcurr;
        revcurr=next;
        size--;
    }
   current->next=prev;
    while(prev->next){
        prev=prev->next;
    }
    prev->next=revcurr;
    return A;
}
