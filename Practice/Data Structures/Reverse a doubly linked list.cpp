DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) 
{
    DoublyLinkedListNode *p = head, *tmp;
    
    while(p != NULL)
    {
        tmp = p->next;
        p->next = p->prev;
        p->prev = tmp;
        p = tmp;
    }
    
    p = head;
    
    while(p->prev != NULL)
    {
        p = p->prev;
    }
    
    head = p;
    return head;
}