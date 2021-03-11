int hurdleRace(int k, vector<int> height)
{
    int max_height = height[0], doses;
    
    for(int i=0; i<height.size(); i++)
    {
        max_height = max(max_height,height[i]);
    }
    
    doses = max_height - k;
    
    doses = (doses<0) ? 0 : doses;
    
    return doses;


}