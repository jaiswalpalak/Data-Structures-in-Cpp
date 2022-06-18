int length(Node* head){
    if(head == NULL){
        return 0;
    }
    
    return 1+ length(head->next);
    
}

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    
    int n = length(head1);
    int m = length(head2);
    int d = abs(n-m);
    Node *temp1 = head1;
    Node *temp2 = head2;
    
    if(n>m){
        for(int i=0; i<d; i++){
            temp1 = temp1->next;
        }
    }
    else{
        for(int i=0; i<d; i++){
            temp2 = temp2->next;
        }
    }
    
    while(temp1 and temp2){
        if(temp1 == temp2){
            return temp1->data;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    
    return -1;
}
