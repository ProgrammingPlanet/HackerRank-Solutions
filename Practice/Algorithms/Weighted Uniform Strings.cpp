vector<string> weightedUniformStrings(string s, vector<int> queries) 
{
    vector<int> possible_weights;
    vector<string> result;
    int w = 0, l = 0, r = 0;
    
    while(r<s.size())
    {
        if(s[l]==s[r])
        {
            w += s[l]-96;
            possible_weights.push_back(w);
            r++;
        }
        else{
            l = r;
            w = 0;
        }
    }
    
    sort(possible_weights.begin(), possible_weights.end());
    
    for(int x: queries)
    {
        if(binary_search(possible_weights.begin(), possible_weights.end(), x))
        {
            result.push_back("Yes");
        }
        else{
            result.push_back("No");
        }
    }
    
    return result;
}