string isBalanced(string s) 
{
    stack<char> st;
    
    map<char,char> bal = {{'}','{'}, {')','('}, {']','['}};
    
    for(char c: s)
    {
        if(c == '{' or c == '(' or c == '[')
        {
            st.push(c);
        }
        else{
            if(!st.empty() and st.top()==bal[c])
            {
                st.pop();
            }
            else{
                return "NO";
            }
        }
    }
    
    return st.empty() ? "YES" : "NO";
}