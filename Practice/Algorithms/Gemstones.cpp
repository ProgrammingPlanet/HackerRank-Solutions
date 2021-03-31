string remove_duplicates(string &s)
{
    set<char> chars;
    string res = "";
    
    for(char x: s)
    {
        chars.insert(x);
    }
    
    for(char x: chars)
    {
        res += x;
    }
    
    return res;
}


int gemstones(vector<string> rocks) 
{
    int min_mineral_rock_ind = 0, result = 0;
    
    for(int i=0; i<rocks.size(); i++)
    {
        if(rocks[i].size() < rocks[min_mineral_rock_ind].size())
        {
            min_mineral_rock_ind = i;
        }
    }
    
    string min_mineral_rock = remove_duplicates(rocks[min_mineral_rock_ind]);
    
    for(int i=0; i<min_mineral_rock.size(); i++)
    {
        int flag = 1;
        
        for(string rock: rocks)
        {
            if(rock.find(min_mineral_rock[i]) == string::npos)
            {
                flag = 0;
                break;
            }
        }
        
        if(flag)
        {
            result++;
        }
    }
    
    return result;
}