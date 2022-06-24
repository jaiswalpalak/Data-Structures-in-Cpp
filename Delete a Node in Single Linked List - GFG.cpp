Node* deleteNode(Node *head,int x)
{
    Node* curr = head;
    Node* prev = NULL;
    if(x == 1){
        head = head->next;
        return head;
    }
    while(curr->next!=NULL && x>1){
        prev = curr;
        curr = curr->next;
        x--;
    }
    prev->next = curr->next;
    return head;
    //Your code here
}
