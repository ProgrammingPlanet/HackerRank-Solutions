int marsExploration(string s) 
{
    string sos = "SOS";
    int result = 0;
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] != sos[i%3])
        {
            result++;
        }
    }

    return result;
}