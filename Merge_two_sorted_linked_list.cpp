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
listnode* mergeTwoLists(listnode* A, listnode* B) {
  
    listnode* p=A;
    listnode* q=B;
    listnode* s=NULL;
    if(p == NULL)
        return q;
    if(q == NULL)
        return p;

    if(p->val <= q->val)
    {
      s=p;
      p=s->next;
    }
    else
    {
        s=q;
        q=s->next;
    }
    listnode* h=s;
while(p && q)
{
 if(p->val <= q->val)
 {
     s->next=p;
     s=p;
     p=s->next;
 }
 else
 {
     s->next=q;
     s=q;
     q=s->next;
 }
}
if(p==NULL)
{
    s->next=q;
}
if(q==NULL)
{
    s->next=p;
}
return h;
}

