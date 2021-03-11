int pickingNumbers(vector<int> a) 
{
    sort(a.begin(),a.end());
    
    int p1 = 0, p2 = 0, max_len = 0;
    
    while(p2<a.size())
    {
        p2++;
        if( abs(a[p2]-a[p1]) > 1 )
        {
            max_len = max(max_len,abs(p2-p1));
            p1 = p2;
            
        }
    }
    return max_len;
}