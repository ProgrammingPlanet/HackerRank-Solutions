int camelcase(string s) 
{    
    int words = 1;
    
    for(char x: s)
    {
        if(x>='A' and x<='Z')
        {
            words++;
        }
    }
    
    return words;
}