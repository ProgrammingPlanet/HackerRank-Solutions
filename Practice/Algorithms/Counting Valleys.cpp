int countingValleys(int steps, string path)
{
    int valleys = 0, h = 0;
    
    h = (path[0]=='U') ? 1 : -1;
    
    for(int i=1; i<steps; i++)
    {
        if(path[i]=='U')
        {
            h++;
            if(h==0)
            {
                valleys++;
            }
        }
        else{
            h--;
        }
    }
    
    return valleys;

}