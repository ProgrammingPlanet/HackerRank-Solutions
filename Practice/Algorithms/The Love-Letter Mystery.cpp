int theLoveLetterMystery(string s) 
{
    int n = s.size(), oprs = 0;
    
    for(int l=0,r=n-1; l<n/2; l++,r--)
    {
        oprs += abs((int)(s[l]-s[r]));
    }
    
    return oprs;

}