int flatlandSpaceStations(int n, vector<int> c) 
{
    int max_dist;

    sort(c.begin(), c.end());

    max_dist = max(c[0], (n-1)-c[n-1]);

    for(int i=0; i<c.size()-1; i++)
    {
        max_dist = max(max_dist, (c[i+1]-c[i])/2 );
    }

    return max_dist;
}