/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {

    ListNode* current=A;
    ListNode* next=NULL;
    ListNode* prev=NULL;
    int count=0;
    while(current && count<2){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        count++;
    }
    if(current){
        A->next=swapPairs(current);
    }
    return prev;


}
