string happyLadybugs(string b) 
{
    string result = "YES";
    
    map<char,int> freq;
    
    for(char x: b)
    {
        freq[x]++;
    }
    
    if(freq['_']==0)    //if there is no _ in string
    {
        for(int i=1; i<b.size(); i++)
        {
            if(b[i-1]!=b[i] and b[i]!=b[i+1])   //if a char is not already happy
            {
                result = "NO";
                break;
            }
        }
    }
    
    for(int i=0; i<b.size(); i++)
    {
        if(b[i]!='_' and freq[b[i]]==1) //if a non-underscore char occur only one time
        {
            result = "NO";
            break;
        }
    }
    
    return result;
}