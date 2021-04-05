int maximumToys(vector<int> prices, int k) 
{
    int total_cost = 0, i;
    
    sort(prices.begin(),prices.end());
    
    for(i=0; i<prices.size(); i++)
    {
        if(prices[i]+total_cost > k)
        {
            break;
        }
        total_cost += prices[i];
    }
    
    return i;
}