class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        if(head == NULL || head->next == NULL){
            return head;
        }
        int count = 0;
        Node* tail = head;
        Node* curr = head;
        
        while(tail->next!=NULL){
            tail = tail->next;
        }
        while(count<k){
            head = head->next;
            tail->next = curr;
            curr->next = NULL;
            tail = curr;
            curr = head;
            count++;
        }
        return head;
    }
};
