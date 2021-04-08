bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{
    SinglyLinkedListNode *p1 = head1, *p2 = head2;
    
    bool equal_len = true, equal_data = true;
    
    while(p1 != NULL and p2 != NULL)
    {
        if(p1->data != p2->data)
        {
            equal_data = false;
            break;
        }
        p1 = p1->next;
        p2 = p2->next;
    }
    
    equal_len = (p1==NULL and p2==NULL);
    
    return (equal_len and equal_data);
}