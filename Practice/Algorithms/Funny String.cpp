string funnyString(string s) 
{
    int n = s.size();
    string res = "Funny";
    
    for(int i=0,j=n-1; i<n-1; i++,j--)
    {
        if(abs(s[i]-s[i+1]) != abs(s[j]-s[j-1]))
        {
            res = "Not Funny";
            break;
        }
    }
    
    return res;

}