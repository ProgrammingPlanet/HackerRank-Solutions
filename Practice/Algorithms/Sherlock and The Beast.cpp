void decentNumber(int n) 
{
    map<char,int> dig_freq = {{'5',0},{'3',0}};
    
    for(int i=n; i>=0; i-=5)
    {
        if(i%3==0 && (n-i)%5==0)
        {
            dig_freq['5'] = i;
            dig_freq['3'] = n-i;
            break;
        }
    }
    
    if(dig_freq['5'] or dig_freq['3'])
    {
        string left(dig_freq['5'],'5'), right(dig_freq['3'],'3');
        cout<<left<<right<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}