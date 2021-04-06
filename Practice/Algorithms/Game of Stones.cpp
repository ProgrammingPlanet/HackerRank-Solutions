string gameOfStones(int n) 
{
    if(n%7==0 or n%7==1)
    {
        return "Second";
    }
    return "First";
}