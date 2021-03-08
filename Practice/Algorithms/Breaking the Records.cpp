vector<int> breakingRecords(vector<int> scores)
{
    int best = scores[0], worst = scores[0], best_count = 0, worst_count = 0;
    
    for(int i=0; i<scores.size(); i++)
    {
        if(scores[i] < worst)
        {
            worst = scores[i];
            worst_count++;
        }
        else if(scores[i] > best)
        {
            best = scores[i];
            best_count++;
        }
    }
    
    return {best_count,worst_count};

}