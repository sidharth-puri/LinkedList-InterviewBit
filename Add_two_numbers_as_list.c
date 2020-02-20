/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * @input B : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
listnode* addTwoNumbers(listnode* A, listnode* B) {
    int carry=0;
    listnode* ptra=A;
    listnode* ptrb=B;
    listnode* ptrc=NULL;
    listnode* head;
    while(ptra || ptrb){
        int sum=0;
        sum=(ptra?ptra->val:0) + (ptrb?ptrb->val:0) + carry;
        if(sum>=10){
            sum=sum%10;
            carry=1;
        }
        else{
            carry=0;
        }
        listnode* temp=listnode_new(sum);
        if(ptrc==NULL){
            ptrc=temp;
            head=ptrc;
        }
        else{
            ptrc->next=temp;
            ptrc=temp;
        }
       if(ptra) ptra=ptra->next;
        if(ptrb) ptrb=ptrb->next;
    }
    if(carry==1) {
         listnode* temp=listnode_new(carry);
          ptrc->next=temp;
            ptrc=temp;
    }
    return head;
}
