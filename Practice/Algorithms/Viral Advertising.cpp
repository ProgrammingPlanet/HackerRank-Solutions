int viralAdvertising(int n) 
{
    int shared = 5, liked, Cumulative = 0;
    
    for(int day=1; day<=n; day++)
    {
        liked = shared/2;
        Cumulative += liked;
        shared = liked * 3;
    }
    
    return Cumulative;

}