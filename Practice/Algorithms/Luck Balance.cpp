int luckBalance(int k, vector<vector<int>> contests) 
{
    int bal = 0;

    sort(contests.begin(), contests.end());

    for(int i=contests.size()-1; i>=0; i--)
    {
        if(contests[i][1]!=0 && k>0)
        {
            bal += contests[i][0];
            k--;
        }
        else if(contests[i][1]==0)
        {
            bal += contests[i][0];
        }
        else{
            bal -= contests[i][0];
        }
    }    
    return bal;
}