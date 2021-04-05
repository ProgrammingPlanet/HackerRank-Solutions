int minimumAbsoluteDifference(vector<int> arr) 
{
    long long min_abs_diff = INT_MAX;
    
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<arr.size()-1; i++)
    {
        min_abs_diff = min(min_abs_diff,(long long)abs(arr[i]-arr[i+1]));
    }
    return min_abs_diff;
}