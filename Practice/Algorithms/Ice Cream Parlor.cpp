vector<int> icecreamParlor(int m, vector<int> arr) 
{
    int n = arr.size();
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j] == m)
            {
                return {i+1,j+1};
            }
        }
    }
    
    return {0,0}; //only for compiler error
}