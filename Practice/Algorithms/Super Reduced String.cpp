string superReducedString(string s) 
{
    for(int i=0; i<(int)s.size()-1; i++) //without typecast, didn't works
    {
        if(s[i]==s[i+1])
        {
            s.erase(i,2);
            i = -1;
        }
    }
    
    return s.size() ? s : "Empty String";
}