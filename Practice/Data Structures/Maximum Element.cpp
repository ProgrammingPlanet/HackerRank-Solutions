vector<int> getMax(vector<string> operations) 
{
    vector<int> res;
    stack<int> s;
    
    for(string opr: operations)
    {
        char o = opr[0];
        
        if(o == '1')
        {
            int v = stoi(opr.substr(2,opr.size()-2));
            if(s.empty())
            {
                s.push(v);
            }
            else{
                s.push(max(v,s.top()));
            }
        }
        else if(o == '2')
        {
            if(!s.empty())
            {
                s.pop();
            }
        }
        else if(o == '3')
        {
            res.push_back(s.top());
        }
    }
    return res;
}