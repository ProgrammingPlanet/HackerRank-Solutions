string kangaroo(int x1, int v1, int x2, int v2)
{
    //if x1+n*v1 == x2+n*v2 for any postive integer n, then return true
    
    float x = x1-x2, v = v2-v1, n;
    
    if(v == 0)
    {
        if(x == 0) return "YES";
        else return "NO";
    }
    
    n = x/v;
    
    if(ceilf(n)==n && n>=0) //if n contains postive int value
    {
        return "YES";
    }
    else{
        return "NO";
    }

}