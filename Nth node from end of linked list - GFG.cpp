int getNthFromLast(Node *head, int n)
{
    Node *temp = head;
    Node* curr = head;
    int len=1;
    int count = 1;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    int i = len-n;
    if(i<=0){
        return -1;
    }
    else{
        while(curr!=NULL){
            if(count == i){
                return curr->data;
            }
            else{
                curr = curr->next;
                count++;
            }
        }
    }
}
