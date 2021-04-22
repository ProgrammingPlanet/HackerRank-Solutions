#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int q, opr, x;
    
    cin>>q;
    
    stack<int> front, rear;
    
    while(q--)
    {
        cin>>opr;
        
        if(opr == 1)
        {
            cin>>x;
            rear.push(x);
        }
        else{
            if(front.empty())
            {
                while(!rear.empty())
                {
                    front.push(rear.top());
                    rear.pop();
                }
            }
            if(opr == 2)
            {
                front.pop();
            }
            else if(opr == 3)
            {
                cout<<front.top()<<endl;
            }
        }
    }
      
    return 0;
}
