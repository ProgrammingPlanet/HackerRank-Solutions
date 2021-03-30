vector<string> cavityMap(vector<string> grid) 
{
    int rows = grid.size(), columns = grid[0].size();
    
    bool cavity;
    
    for(int i=1; i<rows-1; i++)
    {
        for(int j=1; j<columns-1; j++)
        {
            cavity = (grid[i][j]>grid[i][j+1]) and (grid[i][j]>grid[i][j-1]) and (grid[i][j]>grid[i+1][j]) and (grid[i][j]>grid[i-1][j]);
            
            if(cavity)
            {
                grid[i][j] = 'X';
            } 
        }
    }
    
    return grid;

}