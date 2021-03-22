int squares(int a, int b) 
{
    int sqa = ceil(sqrt(a)), sqb = floor(sqrt(b));
    
    return sqb - sqa + 1;
}