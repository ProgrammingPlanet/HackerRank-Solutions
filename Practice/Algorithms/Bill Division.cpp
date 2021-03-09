void bonAppetit(vector<int> bill, int k, int b)
{
    int sum = 0, b_actual;
    
    for(int i=0; i<bill.size(); i++)
    {
        sum += bill[i];
    }
    
    b_actual = (sum/2) - (bill[k]/2);
    
    cout<<( (b==b_actual) ? "Bon Appetit" : to_string(b-b_actual) );

}