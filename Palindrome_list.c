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
 * 
 * @Output Integer
 */

int lPalin(listnode* A) {
    listnode* n1=A;
    listnode* current=A;
    int arr[100000],k=0;
listnode* next=NULL;
listnode* prev=NULL;
while(current!=NULL )
{
    arr[k]=current->val;
    k++;
next=current->next;
current->next=prev;
prev=current;
current=next;
}
listnode* n2=prev;
int i;
k=0;
while(n2->next && n2 )
{
    if(n2->val!=arr[k])
    {
        return 0;
    }
    k++;
    n2=n2->next;
}
return 1;
 
 
}
