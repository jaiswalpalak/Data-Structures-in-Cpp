class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node* newNode = new Node(x);
       newNode->next = head;
       head = newNode;
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       Node* newNode = new Node(x);
       Node* temp = head;
       if(head == NULL){
           newNode->next = head;
           head = newNode;
       }
       else{
       while(temp->next!=NULL){
           temp = temp->next;
       }
       temp->next = newNode;
       }
       //newNode->next = NULL;
       return head;
    }
};
