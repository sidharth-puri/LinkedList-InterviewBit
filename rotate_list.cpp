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
 * @input B : Integer
 * 
 * @Output head pointer of list.
 */
listnode* rotateRight(listnode* A, int B) {
  listnode* current=A;
  listnode* temp;
  listnode* head=A;
  int size=0;
  while(current )
  {
      size++;
      current=current->next;
  }
 
if(B>=size)
  {
      B=(B)%size;
  }

 current=A;
int k=size-B-1;
  while(current && k>0)
  {
      current=current->next;
      k--;
  }
  
   
  temp=current;
  while(current->next)
  {
      current=current->next;
  }
 
 current->next=A;
  A=temp->next;
  temp->next=NULL;
  return A;

}
