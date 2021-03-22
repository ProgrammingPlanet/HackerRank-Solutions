string appendAndDelete(string s, string t, int k) 
{
    int opr, i, n1 = s.size(), n2 = t.size();
    
    for(i=0; i<n1 && i<n2; i++ )
    {
        if(s[i] != t[i])
        {
            break;
        }
    }
    
    opr = (n1 - i) + (n2 - i);
    
    if(opr==k || k >= n1+n2)
    {
        return "Yes";
    }
    
    if(opr<k && opr%2==k%2)
    {
        return "Yes";
    }
    
    return "No";
}