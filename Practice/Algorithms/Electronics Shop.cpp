int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) 
{
    int max = -1, total;
    
    for(auto keyboard: keyboards)
    {
        for(auto drive: drives)
        {
            total = drive+keyboard;
            if(total <= b && total>max)
            {
                max = total;
            }
        }
    }
    
    return max;
}