void inOrder(Node *root) 
{
    if(root == NULL)
    {
        return;
    }
    inOrder(root->left);
    std::cout<<root->data<<" ";
    inOrder(root->right);

}