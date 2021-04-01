void print(vector<int> &v)
{
    for(int x: v)
    {
        cout<<x<<" ";
    }    
    cout<<endl;
}

void insertionSort2(int n, vector<int> arr) 
{
    int current, j;
    
    for(int i=1; i<n; i++)
    {
        current = arr[i];
        j = i-1;
        while(arr[j] > current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
        print(arr);
    }
}