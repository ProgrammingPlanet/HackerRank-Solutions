int birthday(vector<int> s, int d, int m)
{
    int n = s.size(), sum, result = 0;
    
    for(int i=0,j=m-1; j<n; i++,j++)
    {
        sum = 0;
        for(int k=i; k<=j; k++)
        {
            sum += s[k];
        }
        if(sum == d)
        {
            result++;
        }
    }
    
    return result;
}