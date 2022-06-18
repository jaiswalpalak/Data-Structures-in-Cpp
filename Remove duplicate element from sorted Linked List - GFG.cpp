Node *removeDuplicates(Node *head)
{
    if(head == NULL || head->next == NULL){
        return head;
    }
    
   Node* curr = head;
   while(curr->next!=NULL){
       if(curr->data == curr->next->data){
           Node* temp = curr->next->next;
           delete curr->next;
           curr->next = temp;
       }
       else{
           curr = curr->next;
       }
   }
   return head;
    
}
