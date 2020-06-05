void removeTheLoop(Node *head)
{
      Node* slow=head;
    Node* fast=head;
    int flag=0;
    while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            flag=1;
            break;
        }
    }
    if(flag==1){
        Node* B=slow;
        Node* A=head;
        while(A->next!=B->next){
            A=A->next;
            B=B->next;
        }
        B->next=NULL;
    }
    
}
