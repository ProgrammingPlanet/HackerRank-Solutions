int howManyGames(int p, int d, int m, int s) 
{
    int cur_cost, games = 0;
    
    for(int i=0; s>0; i++)
    {
        cur_cost = p - d*i;
        
        if(cur_cost >= m)
        {
            s -= cur_cost;
        }
        else{
            s -= m;
        }
        
        if(s>=0)
        {
            games++;
        }
    }
    
    return games;
}