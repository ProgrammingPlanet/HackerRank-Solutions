int equalizeArray(vector<int> arr) 
{
    int max_freq, res;
    
    map<int,int> freq;
    
    for(int x: arr)
    {
        freq[x]++;
    }
    
    max_freq = freq[0];
    
    for(int i=0; i<freq.size(); i++)
    {
        max_freq = max(max_freq, freq[i]);
    }
    
    res = arr.size() - max_freq;
    
    return res;

}