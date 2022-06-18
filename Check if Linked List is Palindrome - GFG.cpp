class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head == NULL || head->next == NULL){
            return true;
        }
        Node* curr = head;
        Node* prev = NULL;
        
        while(curr->next!=NULL){
            prev = curr;
            curr = curr->next;
        }
        if(head->data == curr->data){
            prev->next = NULL;
            delete curr;
            return isPalindrome(head->next);
        }
        return false;
    }
};
