int lonelyinteger(vector<int> a) 
{
    int loanly = 0;
    for(int x: a)
    {
        loanly = (loanly ^ x);
    }
    return loanly;
}