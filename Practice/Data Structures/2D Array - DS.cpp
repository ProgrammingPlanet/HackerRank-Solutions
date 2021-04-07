int hourglass_sum(vector<vector<int>> &a, int mid_r, int mid_c)
{
    int sum = a[mid_r][mid_c];
    
    for(int i=mid_r-1; i<=mid_r+1; i+=2)
    {
        for(int j=mid_c-1; j<=mid_c+1; j++)
        {
            sum += a[i][j];
        }
        
    }
    return sum;
}


int hourglassSum(vector<vector<int>> arr) 
{
    int sum = INT_MIN;
    
    for(int i=1; i<arr.size()-1; i++)
    {
        for(int j=1; j<arr[i].size()-1; j++)
        {
            sum = max(sum, hourglass_sum(arr,i,j));
        }
    }
    
    return sum;
}