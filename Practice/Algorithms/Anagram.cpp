int anagram(string s) 
{
    int n = s.size(), j, char_changes = 0;
    
    if(n%2 != 0)
    {
        return -1;
    }
    
    for(int i=0; i<n/2; i++)
    {
        for(j=n/2; j<n; j++)
        {
            if(s[i]==s[j])
            {
                s[j] = '_';
                break;
            }
        }
        if(j==n)
        {
            char_changes++;
        }
    }
    
    return char_changes;
}