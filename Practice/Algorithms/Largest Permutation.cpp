vector<int> largestPermutation(int k, vector<int> arr) 
{
    int n = arr.size(), i, j;
    
    for(i=0; i<arr.size() and k>0; i++)
    {
        if(arr[i] != n-i)
        {
            j = i+1;
            while(arr[j] != n-i)
            {
                j++;
            }
            swap(arr[i],arr[j]);
            k--;
        }
    }
    
    return arr;
}