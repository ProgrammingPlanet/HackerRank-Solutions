int stringConstruction(string s) 
{
    map<char,int> inserted;
    int cost = 0;
    
    for(int i=0; i<s.size(); i++)
    {
        if(inserted[s[i]] == 0)
        {
            cost++;
            inserted[s[i]]++;
        }
    }
    
    return cost;
}