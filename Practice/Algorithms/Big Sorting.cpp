//because this question is from sorting topic, so we are not using inbuilt sort() function

bool compare_str(string &s1, string &s2)
{
    if(s1.size() == s2.size())
    {
        return s1>s2;
    }
    return s1.size()>s2.size();
}

void Merge(vector<string> &v, int l, int mid, int r)
{
    vector<string> res;

    int i=l,j=mid+1;

    while(i<=mid && j<=r)
    {
        if(compare_str(v[j],v[i]))
        {
            res.push_back(v[i++]);
        }
        else{
            res.push_back(v[j++]);
        }
    }

    while(i<=mid)
    {
        res.push_back(v[i++]);
    }

    while(j<=r)
    {
        res.push_back(v[j++]);
    }

    for(string x: res)
    {
        v[l++] = x;
    }
}


void MergeSort(vector<string> &v, int l, int r)
{
    if(l < r)
    {
        int mid = (l+r)/2;
        MergeSort(v, l, mid);
        MergeSort(v, mid+1, r);
        Merge(v, l, mid, r);
    }
}

vector<string> bigSorting(vector<string> unsorted) 
{
    MergeSort(unsorted, 0, unsorted.size()-1);
    return unsorted;
}