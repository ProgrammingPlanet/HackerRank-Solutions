Node* insert(Node *root, int data) 
{
    
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }
    else if(root->data > data)
    {
        root->left = insert(root->left,data);
    }
    else if(root->data < data)
    {
        root->right = insert(root->right,data);
    }
    
    return root;
}

Node* insert(Node *root, int data) 
{
    Node *n = new Node(data);
    Node *p = root, *q = p;
    
    if(p == NULL)
    {
        root = n;
        return root;
    }
    
    while(p != NULL)
    {
        q = p;
        if(data < p->data)
        {
            p = p->left;
        }
        else{
            p = p->right;
        }
    }
    if(data < q->data)
    {
        q->left = n;
    }
    else{
        q->right = n;
    }
    return root;
}