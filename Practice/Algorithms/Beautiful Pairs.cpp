int beautifulPairs(vector<int> A, vector<int> B)
{
    int res = 0, n = A.size();
    map<int,int> freq_a,freq_b;

    for(int x: A)
    {
        freq_a[x]++;
    }

    for(int x: B)
    {
        freq_b[x]++;
    }

    for(auto p: freq_a)
    {
        if(p.second>0 && freq_b[p.first]>0)
        {
            res += min(p.second, freq_b[p.first]);
        }
    }

    return res<n ? res+1 : res-1;
}