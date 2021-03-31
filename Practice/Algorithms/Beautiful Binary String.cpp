int beautifulBinaryString(string b) 
{
    int moves = 0;
    
    for(int i=0; i<b.size()-2; i++)
    {
        if(b.substr(i,3) == "010")
        {
            moves++;
            i+= 2;
        }
    }
    
    return moves;

}