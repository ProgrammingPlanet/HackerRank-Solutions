int maximizingXor(int l, int r) 
{
    int x = l^r, bit_counts = 0;
    
    while(x)
    {
        x = (x >> 1);
        bit_counts++;
    }
    
    return pow(2,bit_counts) - 1;
}