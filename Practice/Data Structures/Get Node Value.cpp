int getNode(SinglyLinkedListNode* head, int positionFromTail) 
{
    SinglyLinkedListNode *p = head;
    
    int len = 0, positionFromHead;
    
    while(p != NULL)
    {
        len++;
        p = p->next;
    }
    
    positionFromHead = len - positionFromTail;
    p = head;
    
    while(p != NULL and positionFromHead>1)
    {
        positionFromHead--;
        p = p->next;
    }
    
    return p->data;

}