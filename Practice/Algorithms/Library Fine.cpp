int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) 
{
    int fine;
    
    if(y1 > y2)
    {
        fine = 10000;
    }
    else if(y1 == y2 and m1 > m2)
    {
        fine = 500 * (m1 - m2);
    }
    else if(y1 == y2 and m1 == m2 and d1 > d2)
    {
        fine = 15 * (d1 - d2);
    }
    else{
        fine = 0;
    }
    
    return fine;
}