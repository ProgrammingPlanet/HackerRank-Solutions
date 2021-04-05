vector<int> jimOrders(vector<vector<int>> orders) 
{
    vector<vector<int>> tmp;
    vector<int> res;
    
    for(int i=0; i<orders.size(); i++)
    {
        tmp.push_back({orders[i][0]+orders[i][1],i+1});
    }
    
    sort(tmp.begin(), tmp.end());
    
    for(int i=0; i<tmp.size(); i++)
    {
        res.push_back(tmp[i][1]);
    }
    
    return res;
}