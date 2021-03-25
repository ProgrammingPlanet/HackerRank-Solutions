//change all int to long because of long constrains

long taumBday(long b, long w, long bc, long wc, long z) 
{
    long total_cost = b*min(wc+z,bc) + w*min(bc+z,wc);
    
    return total_cost;
}