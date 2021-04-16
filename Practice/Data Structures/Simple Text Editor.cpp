#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main()
{

    int q, opr, k;
    stack<string> st;
    string S = "", w;
    
    cin>>q;
    
    while(q--)
    {
        cin>>opr;
        
        if(opr == 1)
        {
            cin>>w;
            st.push(S);
            S += w;
        }
        else if(opr == 2)
        {
            cin>>k;
            st.push(S);
            S.erase(S.size()-k);
        }
        else if(opr == 3)
        {
            cin>>k;
            cout<<S[k-1]<<endl;
        }
        else if(opr == 4)
        {
            S = st.top();
            st.pop();
        }
    }
    return 0;
}
