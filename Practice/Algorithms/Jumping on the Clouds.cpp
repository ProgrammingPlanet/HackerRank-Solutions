int jumpingOnClouds(vector<int> c) 
{
    int jumps = 0, n = c.size(), i = 0;
    
    while(i<n-1)
    {
        if((i+2)<n && c[i+2] != 1)
        {
            i++;
        }
        jumps++;
        i++;
    }
    
    return jumps;
}