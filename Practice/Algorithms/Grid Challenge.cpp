string gridChallenge(vector<string> grid) 
{    
    for(int i=0; i<grid.size(); i++)
    {
        sort(grid[i].begin(), grid[i].end());
        if(i > 0)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j] < grid[i-1][j])
                {
                    return "NO";
                }
            }
        }
    }
    return "YES";
}