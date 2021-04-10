Node *lca(Node *root, int v1,int v2) 
{
    if(root == NULL)
    {
        return NULL;
    }
    if(v1 < root->data and v2 < root->data)
    {
        return lca(root->left,v1,v2);
    }
    if(v1 > root->data and v2 > root->data)
    {
        return lca(root->right,v1,v2);
    }
    return root;
}


Node *lca(Node *root, int v1,int v2) 
{
    while(root != NULL)
    {
        int f1 = 0, f2 = 0;
        while(v1 < root->data and v2 < root->data)
        {
            root=root->left;
            f1=1;
        }
        while(v1 > root->data and v2 > root->data)
        {
            root=root->right;
            f2=1;
        }
        if(f1==0 or f2==0)
        {
            return root;
        }
    }
    return root;
}
