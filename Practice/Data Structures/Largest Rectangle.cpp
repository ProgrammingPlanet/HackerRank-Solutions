long largestRectangle(vector<int> h) 
{
    
    long max_area = INT_MIN;
    int n = h.size(), j, k;
    
    for(int i=0; i<n; i++)
    {
        j = i;
        while((j-1)>=0 and h[j-1] >= h[i])
        {
            j--;
        }
        k = i;
        while((k+1)<n and h[k+1] >= h[i])
        {
            k++;
        }
        max_area = max(max_area, (long)(h[i]*(k-j+1)));
    }
    return max_area;
}

long largestRectangle(vector<int> h) 
{
    stack<int> st;

    h.push_back(0);
    
    long area = 0, top, len, i = 0, n = h.size();

    while(i<n)
    {
        if(st.empty() or h[i] > h[st.top()])
        {
            st.push(i);
            i++;
        }
        else
        {
            top = h[st.top()];
            st.pop();

            len = st.empty() ? i : (i - st.top() - 1);

            area = max(area, top * len);
        }
    }
    return area;
}