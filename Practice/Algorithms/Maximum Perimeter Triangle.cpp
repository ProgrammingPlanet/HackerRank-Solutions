bool non_degenerate_triangle(int a, int b, int c)
{
    return (a+b>c && b+c>a && a+c>b);
}

vector<int> maximumPerimeterTriangle(vector<int> sticks) 
{
    vector<int> tr = {-1};
    
    sort(sticks.begin(), sticks.end());
    
    for(int i=0; i<sticks.size()-2; i++)
    {
        if(non_degenerate_triangle(sticks[i],sticks[i+1],sticks[i+2]))
        {
            tr = {sticks[i],sticks[i+1],sticks[i+2]};
        }
    }
    return tr;
}