int num_reverse(int num)
{
    int result = 0;
    while(num)
    {
        result = (result*10) + (num%10);
        num /= 10;
    }
    return result;
}

int beautifulDays(int i, int j, int k) 
{
    int b_days = 0;
    
    while(i<=j)
    {
        if(abs(num_reverse(i)-i)%k ==0)
        {
            b_days++;
        }
        i++;
    }
    
    return b_days++;
}