string pangrams(string s) 
{
    vector<int> freq(26,0);
    
    string res = "pangram";
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' and s[i]<='Z')
        {
            freq[s[i]-65]++;
        }
        else if(s[i]>='a' and s[i]<='z')
        {
            freq[s[i]-97]++;
        }
        
    }
    
    for(int f: freq)
    {
        if(f==0)
        {
            res = "not pangram";
            break;
        }
    }
    
    return res;
}