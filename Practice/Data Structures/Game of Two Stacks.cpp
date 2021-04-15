int twoStacks(int maxSum, vector<int> a, vector<int> b) 
{
    int n1 = a.size(), n2 = b.size();
    
    int i = 0, j = 0, count, sum = 0;
    
    while(i<n1 and sum+a[i]<=maxSum)
    {
        sum += a[i];
        i++;
    }
    
    count = i;
    
    while(j<n2 and i>=0)
    {
        sum += b[j];
        j++;
        while(sum>maxSum and i>0)
        {
            i--;
            sum -= a[i];
        }
        if(sum <= maxSum)
        {
            count = max(count, i+j);
        }
    }
    return count;
}