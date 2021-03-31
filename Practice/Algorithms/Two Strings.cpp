string twoStrings(string s1, string s2) 
{
    map<char,int> freq;
    
    for(char c: s1)
    {
        freq[c]++;
    }
    
    for(int i=0; i<s2.size(); i++)
    {
        if(freq[s2[i]] > 0)
        {
            return "YES";
        }
    }
    return "NO";
}