long flippingBits(long n) 
{
    long res = 0;
    
    for(int i=0; i<32; i++)
    {
        if(n%2 == 0) //lsb is 0
        {
            res += pow(2,i);
        }
        n = (n >> 1);
    }
    return res;
}