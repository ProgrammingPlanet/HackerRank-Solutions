bool is_modified_Kaprekar(long long n)
{
    string s = to_string(n), sq = to_string(n*n);
    
    long long d = s.size(), sqn = sq.size();
    
    string l = sq.substr(0,sqn-d);
    string r = sq.substr(sqn-d, d);

    long long sum = (l.size() ? stoi(l) : 0) + stoi(r);
    
    return (sum == n);
}

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(long long p, long long q) 
{
    int flag = 0;
    
    for(long long i=p; i<=q; i++)
    {
        if(is_modified_Kaprekar(i))
        {
            cout<<i<<" ";
            flag = 1;
        }
    }
    
    if(flag == 0)
    {
        cout<<"INVALID RANGE";
    }
}