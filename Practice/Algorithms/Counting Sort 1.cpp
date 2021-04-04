vector<int> countingSort(vector<int> arr) 
{
    vector<int> counts(arr.size(), 0);
    
    for(int x: arr)
    {
        counts[x]++;
    }
    
    counts.erase(counts.begin()+100, counts.end());
    
    return counts;
}