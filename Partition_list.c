
listnode* partition(listnode* A, int B) {
    listnode* c1=NULL;
    listnode* c2=NULL;
    listnode* l1=NULL;
    listnode* l2=NULL;
    listnode* temp=A;
    while(temp!=NULL)
    {
        if(temp->val<B)
        {
            if(c1==NULL)
            {
                c1= listnode_new(temp->val);
                l1=c1;
            }
            else
            {
                l1->next=  listnode_new(temp->val);
                l1=l1->next;
            }
        }
        else
        {
            if(c2==NULL)
            {
                c2= listnode_new(temp->val);
                l2=c2;
            }
            else
            {
                l2->next=  listnode_new(temp->val);
                l2=l2->next;
            }
        }
        temp=temp->next;
        A=temp;
    }
    if(c1==NULL) return c2;
    l1->next=c2;
    return c1;
}
