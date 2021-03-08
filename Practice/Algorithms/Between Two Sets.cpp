int getTotalX(vector<int> a, vector<int> b)
{   
    int i,j,n = a.size(), m = b.size(), result = 0;
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    for(int x=a[n-1]; x<=b[0]; x++)
    {
        for(i=0; i<n; i++)
        {
            if(x%a[i] != 0)
            {
                break;
            }
        }
        
        for(j=0; j<m; j++)
        {
            if(b[j]%x != 0)
            {
                break;
            }
        }
        
        if(i==n && j==m)
        {
            result++;
        }
    } 
    
    return result;
}
