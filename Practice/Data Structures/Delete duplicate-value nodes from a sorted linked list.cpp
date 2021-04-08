void remove_next(SinglyLinkedListNode *p)
{
    if(p != NULL and p->next != NULL)
    {
        SinglyLinkedListNode *tmp = p->next;
        p->next = p->next->next;
        delete tmp;
    }
}

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) 
{
    SinglyLinkedListNode *p = head;
    
    while(p != NULL and p->next != NULL)
    {
        if(p->data == p->next->data)
        {
            remove_next(p);
        }
        else{
            p = p->next;
        }
    }
    
    return head;
}