int palindromeIndex(string s) 
{
    string tmp1, tmp2;
    int index = -1, n = s.size();
    
    for(int i=0; i<n/2; i++)
    {
        if(s[i]!=s[n-1-i])
        {
            tmp1 = tmp2 = s;
            tmp1.erase(i,1);
            tmp2.erase(n-1-i,1);
            
            if(is_palindrome(tmp1))
            {
                index = i;
            }
            else if(is_palindrome(tmp2))
            {
                index = n-1-i;
            }
            
            break;
        }
    }
    
    return index;
}