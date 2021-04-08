DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) 
{
    DoublyLinkedListNode *p = head, *c = head;
    
    DoublyLinkedListNode *n = new DoublyLinkedListNode(data);
    
    if(p == NULL)
    {
        head = n;
        return head;
    }
    
    while(c != NULL and c->data < data)
    {
        p = c;
        c = c->next;
    }

    n->next = c;
    
    if(p == c)
    {
        head = n;
        p->prev = n;
    }
    else{
        p->next = n;
        n->prev = p;
    }
    
    return head;
}