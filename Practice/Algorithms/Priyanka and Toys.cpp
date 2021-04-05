int toys(vector<int> w) 
{
    int n = w.size(), containers = 1, min_ele;
    sort(w.begin(),w.end());
    
    min_ele = w[0];

    for(int x: w)
    {
        if(x-min_ele > 4)
        {
            containers++;
            min_ele = x;
        }
    }
    return containers;
}