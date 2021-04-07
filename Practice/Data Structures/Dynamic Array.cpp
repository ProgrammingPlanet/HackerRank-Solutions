vector<int> dynamicArray(int n, vector<vector<int>> queries) 
{
    int last_ans = 0, idx, e;
    
    vector<int> ans;
    vector<vector<int>> arr(n);
    
    for(vector<int> q: queries)
    {
        //q = {1-2, x, y}
        if(q[0] == 1)
        {
            idx = (q[1]^last_ans) % n;
            arr[idx].push_back(q[2]);
        }
        else if(q[0] == 2)
        {
            idx = (q[1]^last_ans) % n;
            e = q[2] % arr[idx].size();
            last_ans = arr[idx][e];
            ans.push_back(last_ans);
        }
        cout<<idx<<" ";
    }
    
    return ans;
}