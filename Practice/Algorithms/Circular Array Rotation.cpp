vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) 
{
    int effective_query, n = a.size();
    vector<int> result;
    
    k = k%n;
    
    for(int i=0; i<queries.size(); i++)
    {
        queries[i] = queries[i]%n;
        
        if(queries[i] > k)
        {
            effective_query = (queries[i]-k) % n;
        }
        else{
            effective_query = ((queries[i]-k) + n) % n;
        }
        
        result.push_back(a[effective_query]);
    }

    return result;
}