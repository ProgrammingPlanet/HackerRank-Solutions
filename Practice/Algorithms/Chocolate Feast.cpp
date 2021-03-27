int chocolateFeast(int n, int c, int m) 
{
    int current_eat = n/c, total_eaten = current_eat, wrappers = total_eaten;
    
    while(current_eat > 0)
    {
        current_eat = wrappers/m;
        
        wrappers = current_eat + (wrappers%m);
        
        total_eaten += current_eat;
    }

    return total_eaten;

}