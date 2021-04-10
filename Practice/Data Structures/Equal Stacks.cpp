// login - https://www.hackerrank.com/challenges/equal-stacks/forum/comments/159191

void reverse_cumulative_sum(vector<int> &v)
{
    int cur_sum = 0;
    for(int i=v.size()-1; i>=0; i--)
    {
        v[i] += cur_sum;
        cur_sum = v[i];
    }
}

int search(vector<int> v1, vector<int> v2, vector<int> v3)
{
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end());

    for(int x: v1)
    {
        if(binary_search(v2.begin(), v2.end(), x) and binary_search(v3.begin(),v3.end(), x))
        {
            return x;
        }
    }

    return -1;
}


int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) 
{
    int n1 = h1.size(), n2 = h2.size(), n3 = h3.size(), t;

    reverse_cumulative_sum(h1);
    reverse_cumulative_sum(h2);
    reverse_cumulative_sum(h3);

    if(n1 >= max(n2,n3))
    {
        t = search(h1, h2, h3);
    }
    else if(n2 >= max(n3,n1))
    {
        t = search(h2, h3, h1);
    }
    else if(n3 >= max(n1,n2))
    {
        t = search(h3, h1, h2);
    }

    return (t==-1) ? 0 : t;
}