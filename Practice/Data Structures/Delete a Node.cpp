SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) 
{
    SinglyLinkedListNode *p = head, *tmp;
    
    if(position==0)
    {
        return p->next;
    }
    
    while(p != NULL and position>1)
    {
        p = p->next;
        position--;
    }
    
    if(p == NULL)
    {
        return NULL;
    }
    
    p->next = p->next->next;
    
    return head;
}