vector<int> cutTheSticks(vector<int> arr) 
{
    int no_stick, tmp, i = 0, n = arr.size();
    vector<int> res;
    
    sort(arr.begin(), arr.end());
    
    while(i<n)
    {
        no_stick = n - i;
        res.push_back(no_stick);
        tmp = arr[i];
        while(arr[i]==tmp and i<n)
        {
            i++;
        }
    }
    
    return res;
}