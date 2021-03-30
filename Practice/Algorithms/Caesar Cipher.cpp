string caesarCipher(string s, int k) 
{   
    k = k%26;
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' and s[i]<='Z')
        {
            s[i] = (s[i]+k)>'Z' ? (s[i]+k-26) : s[i]+k;
        }
        else if(s[i]>='a' and s[i]<='z')
        {
            s[i] = (s[i]+k)>'z' ? (s[i]+k-26) : s[i]+k;
        }
    }
    
    return s;
}