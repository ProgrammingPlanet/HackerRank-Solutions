int minimumDistances(vector<int> a) 
{
    int min_dist = INT_MAX, n = a.size();
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                min_dist = min(min_dist, j-i);
                break;
            }
        }
    }
    
    return (min_dist!=INT_MAX) ? min_dist : -1;

}