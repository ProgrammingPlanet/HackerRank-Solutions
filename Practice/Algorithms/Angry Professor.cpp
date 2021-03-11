string angryProfessor(int k, vector<int> a) 
{
    int on_time_students = 0;
    
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]<=0) on_time_students++;
    }
    
    return (on_time_students < k) ? "YES" : "NO";
}