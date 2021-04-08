int list_len(SinglyLinkedListNode *head)
{
    SinglyLinkedListNode *p = head;
    int len = 0;
    while(p != NULL)
    {
        len++;
        p = p->next;
    }
    return len;
}

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{
    SinglyLinkedListNode *p1 = head1, *p2 = head2, *p;
    
    int len1 = list_len(head1), len2 = list_len(head2), diff_len = abs(len1-len2), ans=0;
    
    if(len1>len2)
    {
        while(diff_len--)
        {
            p1 = p1->next;
        }
    }
    else{
        while(diff_len--)
        {
            p2 = p2->next;
        }
    }
    
    while(p1 != NULL and p2 != NULL)
    {
        if(p1 == p2)
        {
            ans = p1->data;
            break;
        }
        p1 = p1->next;
        p2 = p2->next;
    }
    
    return ans;
}