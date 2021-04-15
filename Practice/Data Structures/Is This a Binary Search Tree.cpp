void inorder(Node *root, vector<int> &v)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

bool checkBST(Node* root) 
{
    // Inorder traversal of BST will produce sorted array in ascending order
    
    vector<int> v;
    
    inorder(root, v);
    
    if(v.size() < 2)
    {
        return true;
    }
    
    for(int i=1; i<v.size(); i++)
    {
        if(v[i] <= v[i-1])
        {
            return false;
        }
    }
    return true;
}




// tester code
// contrain 0 <= data <=10000


bool checkBST(Node* root, int minValue, int maxValue) 
{
    if (root == NULL) 
    {
        return true;
    }

    if (root->data < minValue || root->data > maxValue)
    {
        return false;
    }

    return (checkBST(root->left, minValue, root->data - 1) 
            &&  checkBST(root->right, root->data + 1, maxValue)
        );
}

bool checkBST(Node* root) 
{
    return checkBST(root, 0, 10000);
}