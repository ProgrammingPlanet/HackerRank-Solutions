SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{
    SinglyLinkedList *list = new SinglyLinkedList();
    
    SinglyLinkedListNode *p1 = head1, *p2 = head2;
    
    while(p1 != NULL and p2 != NULL)
    {
        if(p1->data < p2->data)
        {
            list->insert_node(p1->data);
            p1 = p1->next;
        }
        else{
            list->insert_node(p2->data);
            p2 = p2->next;
        }
    }
    
    while(p1 != NULL)
    {
        list->insert_node(p1->data);
        p1 = p1->next;
    }
    
    while(p2 != NULL)
    {
        list->insert_node(p2->data);
        p2 = p2->next;
    }
    
    return list->head;
}