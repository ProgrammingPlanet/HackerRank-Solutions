int divisibleSumPairs(int n, int k, vector<int> ar)
{
    int result = 0;
    
    for(int j=0; j<ar.size(); j++)
    {
        for(int i=0; i<j; i++)
        {
            if((ar[i]+ar[j])%k == 0)
            {
                result++;
            }
        }
    }
    
    return result;

}