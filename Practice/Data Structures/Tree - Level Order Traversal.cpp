int height(Node* root) 
{
    if(root == NULL)
    {
        return 0;
    }
    if(root->left == NULL and root->right == NULL)
    {
        return 1;
    }
    return 1 + max(height(root->left),height(root->right));
}

void printlevel(Node *root, int l)
{
    if(root == NULL)
    {
        return;
    }
    if(l == 1)
    {
        cout<<root->data<<" ";
    }
    if(l > 1)
    {
        printlevel(root->left, l-1);
        printlevel(root->right, l-1);
    }
}

void levelOrder(Node * root) 
{
    int h = height(root);
    
    for(int l=1; l<=h; l++)
    {
        printlevel(root, l);
    }
}