SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) 
{
    SinglyLinkedListNode* n = new SinglyLinkedListNode(data);
    
    if(head==nullptr)
    {
        head = n;
        return head;
    }
    
    SinglyLinkedListNode* p = head;
    
    while(p->next != NULL)
    {
        p = p->next;
    }
    
    p->next = n;
    
    return head;
}