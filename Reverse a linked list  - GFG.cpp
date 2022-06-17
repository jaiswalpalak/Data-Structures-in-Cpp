class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head == NULL) return NULL;
       
       Node* p = NULL;
       Node* q = NULL;
       Node* r = head;
       while(r != NULL)
       {
           p = q;
           q = r;
           r = r->next;
           q->next = p;
       }
       return q;
   }
    
    
};
