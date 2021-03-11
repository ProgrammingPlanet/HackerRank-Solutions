void remove_duplicates(vector<int> &v)
{
    vector<int>::iterator ip = unique(v.begin(), v.begin() + v.size());
    v.resize(distance(v.begin(), ip));   
}

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) 
{
    int i = 0, j = player.size()-1, rank = 1;
    vector<int> ranks;
    
    remove_duplicates(ranked);
    
    ranked.push_back(INT_MIN); //for first player
    
    while(j>=0 && i<ranked.size())
    {
        if(player[j] >= ranked[i])
        {
            ranks.push_back(rank);
            j--;
        }
        else{
            rank++;
            i++;
        }
    }
    
    reverse(ranks.begin(), ranks.end());
    
    return ranks;
}