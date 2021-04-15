
node *newnode(int data)
{
    node *n = new node;
    n->val = data;
    n->left = n->right = NULL;
    n->ht = 0;
    return n;
}

int height(node *n)
{
    return (n==NULL) ? -1 : n->ht;
}

int balance_factor(node *n)
{
    return (n==NULL) ? 0 : (height(n->left) - height(n->right));
}

node *RightRotate(node *z)
{
    node *y = z->left;
    node *T3 = y->right;

    y->right = z;
    z->left = T3;

    z->ht = max(height(z->left),height(z->right)) + 1;
    y->ht = max(height(y->left),height(y->right)) + 1;

    return y;
}

node *LeftRotate(node *z)
{
    node *y = z->right;
    node *T2 = y->left;

    y->left = z;
    z->right = T2;

    z->ht = max(height(z->left),height(z->right)) + 1;
    y->ht = max(height(y->left),height(y->right)) + 1;

    return y;
}


node *insert(node *n, int data)
{
	if(n == NULL)
        {
            return newnode(data);
        }
        if(data < n->val)
        {
            n->left = insert(n->left, data);
        }
        else if(data > n->val)
        {
            n->right = insert(n->right, data);
        }
        else{
            return n;
        }

        n->ht = 1 + max(height(n->left),height(n->right));

        int bf = balance_factor(n);

        // LL case
        if(bf > 1 and data < n->left->val)
        {
            return RightRotate(n);
        }

        // RR case
        if(bf < -1 and data > n->right->val)
        {
            return LeftRotate(n);
        }

        // LR case
        if(bf > 1 and data > n->left->val)
        {
            n->left = LeftRotate(n->left);
            return RightRotate(n);
        }

        // RL case
        if(bf < -1 and data < n->right->val)
        {
            n->right = RightRotate(n->right);
            return LeftRotate(n);
        }

        return n;
  
}