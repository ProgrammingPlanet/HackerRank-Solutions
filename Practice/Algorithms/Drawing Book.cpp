int pageCount(int n, int p)
{
    int result_back, result_front;
    
    result_front = p/2;
    
    result_back = n/2-p/2;
    
    
    return min(result_front,result_back);

}