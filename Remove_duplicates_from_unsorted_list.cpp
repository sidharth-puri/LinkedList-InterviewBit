Node *removeDuplicates(Node *root)
{
    Node* current=root;
   Node* next;
   while(current && current->next) {
      next =current;
   
       while(next->next) {
           if(next->next->data==current->data) {
               next->next=next->next->next;
               
           }
           else {
               next=next->next;
           }
       }
       current=current->next;
   }
   return root;
}
