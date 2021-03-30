long strangeCounter(long t) 
{
    long value = 3, cycle_end_time = 0, result;
    
    for(long cycle=1; cycle_end_time<t; cycle++)
    {
        cycle_end_time = 2*cycle_end_time + value;
    }

    result = cycle_end_time - t + 1;
    
    return result;
}