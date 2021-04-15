void decode_huff(node * root, string s) 
{
    node *p = root;
    
    for(char c: s)
    {
        p = (c=='0') ? p->left : p->right;
        if(p->left == NULL and p->right == NULL)
        {
            cout<<p->data;
            p = root;
        }
    }
    cout<<endl;
}