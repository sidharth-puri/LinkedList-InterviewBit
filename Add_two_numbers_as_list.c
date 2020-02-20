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
    listnode* temp=NULL;
    listnode* prev=NULL;
    listnode* head=NULL;
    int carry=0,sum=0;
    while(A||B)
    {
        sum=carry + (A?A->val:0)+ (B?B->val:0);
        if(sum>=10)
        {
            carry=1;
            sum=sum%10;
        }
        else
        {
            carry=0;
        }
        temp=listnode_new(sum);
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            prev->next=temp;
        }
        prev=temp;
       if(A) A=A->next;
        if(B) B=B->next;
    }
    if(carry)
    {
        temp=listnode_new(carry);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
