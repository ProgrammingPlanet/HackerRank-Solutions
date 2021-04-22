//algo source - https://www.nayuki.io/page/next-lexicographical-permutation-algorithm

//there is also a cpp function for this next_permutation()

string biggerIsGreater(string w) 
{
    int n = w.size(), pivot = -1;
    
    for(int i=n-1; i>0; i--)
    {
        if(w[i] > w[i-1])
        {
            pivot = i-1;
            break;
        }
    }
    if(pivot != -1)
    {
        for(int i=n-1; i>0; i--)
        {
            if(w[i] > w[pivot])
            {
                swap(w[i], w[pivot]);
                sort(w.begin()+pivot+1, w.end());
                return w;
            }
        }
    }
    return "no answer";
}