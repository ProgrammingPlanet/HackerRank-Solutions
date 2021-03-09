
int migratoryBirds(vector<int> arr) 
{
    int max_freq,max_freq_id;
    map<int,int> freq;
    
    for(int i=0; i<arr.size(); i++)
    {
        freq[arr[i]]++;
    }
    
    max_freq_id = arr[0];
    max_freq = freq[arr[0]];
    
    for(auto f : freq)
    {
        if(f.second > max_freq)
        {
            max_freq = f.second;
            max_freq_id = f.first;
        }
        if(f.second == max_freq)
        {
            if(f.first < max_freq_id)
            {
                max_freq_id = f.first;
            }
        }
    }
    
    return max_freq_id;

}