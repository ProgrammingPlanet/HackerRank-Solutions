vector<int> permutationEquation(vector<int> p) 
{
    int n = p.size();
    vector<int> y;
    
    for(int x=1; x<=n; x++)
    {
        for(int i=0; i<p.size(); i++)
        {
            if(p[p[i]-1]==x)
            {
                y.push_back(i+1);
                break;
            }
        }
    }
    
    return y;
}