int countNodes(Node *node)
{
    int cnt = 1;
    Node *tmp = node;
    while (tmp->next != node)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}


int countNodesinLoop(Node *head)
{
    Node *slow = head, *fast = head;
    while (slow and fast and fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return countNodes(slow);
    }
    return 0;
}
