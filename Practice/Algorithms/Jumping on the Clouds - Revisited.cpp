int jumpingOnClouds(vector<int> c, int k) 
{
    int n = c.size(), e = 100, i = 0;
    
    do{
        i = (i+k)%n;
        e -= 1;
        if(c[i] == 1)
        {
            e -= 2;
        }
    }while(i != 0);
    
    return e;

}