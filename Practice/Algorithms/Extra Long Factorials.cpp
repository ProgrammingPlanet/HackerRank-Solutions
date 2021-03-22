
void extraLongFactorials(int n) 
{
    int carry, prod;
    vector<int> res;
    
    res.push_back(1);
    
    for(int i=2; i<=n; i++)
    {
        carry = 0;
        
        for(int j=0; j<res.size(); j++)
        {
            prod = (res[j] * i) + carry;
            res[j] = prod%10;
            carry = prod/10;
        }
        while(carry > 0)
        {
            res.push_back(carry%10);
            carry = carry/10;
        }
    }

    for(int i=res.size()-1; i>=0; i--)
    {
        cout<<res[i];
    }
}