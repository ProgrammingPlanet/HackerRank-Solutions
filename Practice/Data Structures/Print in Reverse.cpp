void reversePrint(SinglyLinkedListNode* head) 
{
    if(head == NULL)
    {
        return;
    }
    
    reversePrint(head->next);
    
    cout<<head->data<<endl;
}

void reversePrint(SinglyLinkedListNode* head) 
{
    stack<int> s;
    
    SinglyLinkedListNode *p = head;
    
    while(p != NULL)
    {
        s.push(p->data);
        p = p->next;
    }
    
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}