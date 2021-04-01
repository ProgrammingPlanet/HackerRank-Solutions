int runningTime(vector<int> arr) 
{
    int n = arr.size(), shifts = 0;

    for(int i=1; i<n; i++)
    {
        int j=i-1, current=arr[i];
        while(arr[j]>current && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
            shifts++;
        }
        arr[j+1] = current;
    }

    return shifts;
}