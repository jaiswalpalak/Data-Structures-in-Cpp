Node* sortedMerge(Node* a, Node* b)  
{  
    Node* head = NULL;
    Node* tail = NULL;
    
    if(a == NULL && b == NULL){
        return head;
    }
    if(a==NULL){
        return b;
    }
    if(b == NULL){
        return a;
    }
    if(a->data <= b->data){
        head = a;
        tail = a;
        a = a->next;
    }
    else if(a->data > b->data){
        head = b;
        tail = b;
        b = b->next;
    }
    while(a!=NULL && b!=NULL){
        if(a->data <= b->data){
            tail->next = a;
            tail = a;
            a = a->next;
        }
        else if(a->data > b->data){
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    if(a == NULL && b!=NULL){
        while(b!=NULL){
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    if (a!=NULL && b== NULL){
        while(a!=NULL){
            tail->next = a;
            tail = a;
            a = a->next;
            
        }
    }
    tail->next = NULL;
    return head;
}
