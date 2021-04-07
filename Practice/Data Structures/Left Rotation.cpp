vector<int> rotateLeft(int d, vector<int> arr) 
{
    //O(n*d) time, O(1) space, (for more optimal, learn juggling algorithm)
    int n = arr.size(), tmp, i;
    d = d%n;
    
    while(d--)
    {
        tmp = arr[0];
        for(i=0; i<arr.size()-1; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[i] = tmp;
    }
    
    return arr;
}