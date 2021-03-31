int makingAnagrams(string s1, string s2) 
{
    int n1 = s1.size(), n2 = s2.size(), del_chars = 0;
    
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(s1[i]==s2[j])
            {
                s1[i] = s2[j] = '_';
                break;
            }
        }
    }
    
    for(int i=0; i<n1; i++)
    {
        if(s1[i] != '_')
        {
            del_chars++;
        }
    }
    
    for(int i=0; i<n2; i++)
    {
        if(s2[i] != '_')
        {
            del_chars++;
        }
    }
    
    return del_chars;
}