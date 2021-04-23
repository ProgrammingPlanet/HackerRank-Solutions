string gridSearch(vector<string> G, vector<string> P) 
{
    int R = G.size(), r = P.size(), C = G[0].size(), c = P[0].size(), found = 0;
    
    for (int i = 0; i <= R - r; i++)
    {
        for (int j = 0; j <= C - c; j++)
        {
            int k = 0, l = i;
            while (G[l].substr(j, c) == P[k])
            {
                if (l - i + 1 == r) 
                {
                    found = 1;
                    break;
                }
                l++, k++;
            }
        }
    }
    
    return (found) ? "YES" : "NO";
}