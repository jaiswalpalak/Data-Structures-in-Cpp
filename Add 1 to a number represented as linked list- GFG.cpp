Node* reverse(Node* &head){
        if(head->next==NULL) return head;
        
        Node* temp=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return temp;
        
    }
    
    Node* addOne(Node *head) 
    {
        head=reverse(head);
        
        int sum=0;
        int carry=0;
        
        sum=head->data+1;
        head->data=sum%10; 
        carry=sum/10; 
        
        Node* temp=head->next;
        Node* prev=head;
        
        while(temp!=NULL){
            
            sum=(temp->data+carry);
            temp->data=sum%10;
            carry=sum/10;
            
            prev=prev->next;
            temp=temp->next;
        }
        
        if(carry){
            Node* newNode=new Node(carry);
            prev->next=newNode;
        }
        prev=head;
        
        head=reverse(prev);
        return head;
    }
