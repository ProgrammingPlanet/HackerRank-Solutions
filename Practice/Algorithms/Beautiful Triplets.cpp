int beautifulTriplets(int d, vector<int> arr) 
{
    int n = arr.size(), triplets = 0;
    
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(arr[j]-arr[i] == arr[k]-arr[j] and arr[k]-arr[j] == d)
                {
                    triplets++;
                }
                else if(arr[k]-arr[j] > d)
                {
                    break; //beause array is sorted
                }
            }
        }
    }
    
    return triplets;
}