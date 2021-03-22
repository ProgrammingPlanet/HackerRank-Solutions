int findDigits(int n) 
{
    int x = n, d, ans = 0;
    
    while(n > 0)
    {
        d = n%10;
        n = n/10;
        if(d != 0 && x%d == 0)
        {
            ans++;
        }
    }
    
    return ans;
}