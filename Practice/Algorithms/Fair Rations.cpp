string fairRations(vector<int> B) 
{
    int sum = 0, min_loaves = 0;
    
    for(int x: B)
    {
        sum += x;
    }
    
    if(sum%2 == 0)
    {
        for(int i=0; i<B.size()-1; i++)
        {
            if(B[i]%2 != 0)
            {
                B[i]++;
                B[i+1]++;
                min_loaves += 2;
            }
        }
    }
    else{
        return "NO";
    }
    
    return to_string(min_loaves);
}