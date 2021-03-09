int sockMerchant(int n, vector<int> ar)
{
    int result = 0;
    map<int,int> freq;
    
    for(int i=0; i<n; i++)
    {
        freq[ar[i]]++;
    }
    
    for(auto x: freq)
    {
        result += x.second/2;
    }
    
    return result;

}