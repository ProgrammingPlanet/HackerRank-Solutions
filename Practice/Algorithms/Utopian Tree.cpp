int utopianTree(int n) 
{
    int h = 1;
    
    for(int i=0; i<n; i++)
    {
        if(i%2 == 0)
        {
            h *= 2;
        }
        else{
            h += 1;
        }
    }
    
    return h;

}