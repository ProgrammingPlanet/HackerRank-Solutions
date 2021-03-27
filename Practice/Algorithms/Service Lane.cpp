int min_of_array_segment(vector<int> &a, int l, int r)
{
    int min_ele = a[l];
    
    for(int i=l; i<=r; i++)
    {
        min_ele = min(a[i], min_ele);
    }
    
    return min_ele;
}

// Complete the serviceLane function below.
vector<int> serviceLane(vector<int> width, vector<vector<int>> cases) 
{
    vector<int> res;
    
    for(int i=0; i<cases.size(); i++)
    {
        res.push_back(min_of_array_segment(width, cases[i][0], cases[i][1]));
    }
    
    return res;
}