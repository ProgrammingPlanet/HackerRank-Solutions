int formingMagicSquare(vector<vector<int>> s) 
{
    vector<vector<vector<int>>> magic_matricses = {
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}}, 
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}, 
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}}, 
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}}, 
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}}
    };
    
    int min_cost = 72, cur_cost;
    
    for(int k=0; k<8; k++)
    {
        cur_cost = 0;
        for(int j=0; j<3; j++)
        {
            for(int i=0; i<3; i++)
            {
                cur_cost += abs(s[j][i] - magic_matricses[k][j][i]);
            }
        }
        min_cost = min(min_cost,cur_cost);
    }

    return min_cost;

}