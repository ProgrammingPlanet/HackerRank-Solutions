vector<int> missingNumbers(vector<int> arr, vector<int> brr) 
{
    vector<int> res;
    
    map<int,int> freq_a, freq_b;
    
    for(int x: arr)
    {
        freq_a[x]++;
    }
    for(int x: brr)
    {
        freq_b[x]++;
    }
    
    for(int x: brr)
    {
        if(freq_a[x] != freq_b[x])
        {
            if(not linear_search(res,x))
            {
                res.push_back(x);
            }
        }
    }
    
    sort(res.begin(), res.end());
    
    return res;
}