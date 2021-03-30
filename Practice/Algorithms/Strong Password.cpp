int minimumNumber(int n, string password) 
{
    int min_req_symbols, result;
    string special_characters = "!@#$%^&*()-+";
    
    map<string,int> occr;
    
    for(int i=0; i<n; i++)
    {
        char ch = password[i];
        
        if(ch>='A' and ch<='Z')
        {
            occr["upper"] = 1;
        }
        else if(ch>='a' and ch<='z')
        {
            occr["lower"] = 1;
        }
        else if(ch>='0' and ch<='9')
        {
            occr["num"] = 1;
        }
        else if(special_characters.find(ch) != string::npos)
        {
            occr["spec"] = 1;
        }
    }
    
    min_req_symbols = 4 - (occr["upper"]+occr["lower"]+occr["num"]+occr["spec"]);
    
    
    result = n<6 ? max(6-n,min_req_symbols) : min_req_symbols;
    
    return result;
}