int nonDivisibleSubset(int k, vector<int> s) 
{
    int n = s.size(), res = 0;
    map<int,int> freq;
    
    for(int i=0; i<n; i++)
    {
        s[i] = s[i]%k;
    }
    
    for(int x: s)
    {
        freq[x]++;
    }
    
    for (int i=1; i<(k+1)/2; i++)
    {
        res += (freq[i] > freq[k - i] ? freq[i] : freq[k - i]);
    }
    res += (freq[0] > 0) + (k%2==0 && freq[k/2]);
    
    return res;
}