string balancedSums(vector<int> arr) 
{
    int total_sum = 0, left_sum = 0, right_sum;
    
    for(int x: arr)
    {
        total_sum += x;
    }
    
    for(int i=0; i<arr.size(); i++)
    {
        right_sum = total_sum - arr[i] - left_sum;
        if(left_sum == right_sum)
        {
            return "YES";
        }
        left_sum += arr[i];
    }
    
    return "NO";
}