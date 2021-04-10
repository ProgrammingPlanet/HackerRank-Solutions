vector<int> matchingStrings(vector<string> strings, vector<string> queries) 
{
    vector<int> r;
    for(string q: queries)
    {
        int count = 0;
        for(string s: strings)
        {
            if(q == s)
            {
                count++;
            }
        }
        r.push_back(count);
    }
    return r;
}