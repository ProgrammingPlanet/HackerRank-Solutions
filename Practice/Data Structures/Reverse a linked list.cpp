SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) 
{
    stack<int> s;
    
    SinglyLinkedListNode *p = head;
    
    while(p != NULL)
    {
        s.push(p->data);
        p = p->next;
    }
    
    p = head;
    
    while(p != NULL)
    {
        p->data = s.top();
        s.pop();
        p = p->next;
    }
    
    return head;
}

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head)
{
    SinglyLinkedListNode *prev, *cur, *nxt;

    prev = NULL;
    cur = nxt = head;

    while(cur != NULL)
    {
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }

    head = prev;
    return head;
}