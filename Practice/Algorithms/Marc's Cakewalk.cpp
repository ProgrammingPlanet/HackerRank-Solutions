long marcsCakewalk(vector<int> calorie) 
{
    long long min_miles = 0, n = calorie.size();
    
    sort(calorie.begin(), calorie.end());
    
    for(int i=0; i<n; i++)
    {
        min_miles += calorie[n-i-1] * pow(2,i);
    }
    
    return min_miles;
}