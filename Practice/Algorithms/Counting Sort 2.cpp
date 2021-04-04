vector<int> countingSort(vector<int> arr) 
{
    map<int,int> freq;
    vector<int> pos, tmp = arr;
    int cnt = 0;
    
    for(int x: arr)
    {
        freq[x]++;
    }
    
    for(int i=0; i<freq.size(); i++)
    {
        cnt += freq[i];
        pos.push_back(cnt);
    }
    
    for(int i=arr.size()-1; i>=0; i--)
    {
        int index = --pos[arr[i]];
        tmp[index] = arr[i];
    }
    
    return tmp;

}