long sumXor(long n) 
{
    int count_bin_zero = 0;
    
    while(n)
    {
        count_bin_zero += (n%2==0); //n%2 mean bin lsb of n
        n = (n >> 1);
    }
    
    return pow(2,count_bin_zero);
}