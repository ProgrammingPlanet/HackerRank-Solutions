vector<int> closestNumbers(vector<int> arr) 
{
    vector<int> res;
    int min_diff = INT_MAX;
    
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<arr.size()-1; i++)
    {
        min_diff = min(arr[i+1]-arr[i], min_diff);
    }
    
    for(int i=0; i<arr.size()-1; i++)
    {
        if(arr[i+1]-arr[i] == min_diff)
        {
            res.push_back(arr[i]);
            res.push_back(arr[i+1]);
        }
    }

    return res;
}