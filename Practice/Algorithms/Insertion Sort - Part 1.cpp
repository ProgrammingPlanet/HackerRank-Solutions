void print(vector<int> &v)
{
    for(int x: v)
    {
        cout<<x<<" ";
    }    
    cout<<endl;
}

void insertionSort1(int n, vector<int> arr) 
{
    int current = arr[n-1];
    int j = n-1-1;
    
    while(arr[j] > current && j>=0)
    {
        arr[j+1] = arr[j];
        j--;
        print(arr);
    }
    arr[j+1] = current;
    print(arr);
}