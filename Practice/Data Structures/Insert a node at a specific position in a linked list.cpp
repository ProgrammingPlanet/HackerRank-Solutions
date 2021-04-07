SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) 
{
    SinglyLinkedListNode* n = new SinglyLinkedListNode(data);
    
    SinglyLinkedListNode* p = head;
    
    while(p != NULL and position>1)
    {
        p = p->next;
        position--;
    }
    
    n->next = p->next;
    
    p->next = n;
    
    return head;
}