long repeatedString(string s, long n) 
{
    long int res, cnt_a_orig = 0, len_s = s.size();
    
    for(int i=0; i<len_s; i++)
    {
        if(s[i]=='a')
        {
            cnt_a_orig++;
        }
    }
    
    res = cnt_a_orig * (n/len_s);
    
    for(int i=0; i<(n%len_s); i++)
    {
        if(s[i]=='a')
        {
            res++;
        }
    }
    
    return res;
}