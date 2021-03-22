int saveThePrisoner(int n, int m, int s) 
{
    int result;
    
    m = m%n;
    
    result = ((m+s-1) % n) ;
    
    return (result) ? result : n;
}