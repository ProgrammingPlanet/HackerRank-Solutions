string gameOfThrones(string s) 
{
    map<char,int> freq;
    int odds = 0;
    string res;
    
    for(char c: s)
    {
        freq[c]++;
    }
    
    for(pair<char,int> p: freq)
    {
        if(p.second%2 != 0)
        {
            odds++;
        }
    }
    
    res = (odds>1) ? "NO" : "YES";
    
    return res;
}