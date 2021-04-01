vector<int> quickSort(vector<int> arr) 
{
    int piv = 0, n = arr.size(), piv_ele = arr[0];
    
    int i = 1;
    
    for(int j=1; j<n; j++)
    {
        if(arr[j] < arr[piv])
        {
            swap(arr[i],arr[j]);
            i++;
        }   
    }
    
    piv_ele = arr[piv];
    
    arr.erase(arr.begin(), arr.begin()+1);
    
    arr.insert(arr.begin()+i-1, piv_ele);
    
    return arr;
}