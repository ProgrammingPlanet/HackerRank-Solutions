// Floyd’s Cycle-Finding Algorithm 

bool has_cycle(SinglyLinkedListNode* head) 
{
    SinglyLinkedListNode *fast = head, *slow = head;
    
    while(fast != NULL and slow != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            return true;
        }
    }
    return false;
}