string hackerrankInString(string s) 
{
    int p = 0;
    string spec = "hackerrank";
    
    for(int i=0; i<s.size() and p<spec.size(); i++)
    {
        if(s[i]==spec[p])
        {
            p++;
        }
    }
    
    return (p==spec.size()) ? "YES" : "NO";
}