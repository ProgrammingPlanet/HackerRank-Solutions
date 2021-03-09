bool gregorian_leap_year(int year)
{
    return (year%400==0) || ((year%4==0) && (year%100!=0));
}

bool julian_leap_year(int year)
{
    return (year%4==0);
}

string dayOfProgrammer(int y) 
{
    string dd, mm = "09", yyyy = to_string(y);
    
    if(y<=1917)
    {
        dd = julian_leap_year(y) ? "12" : "13";
    }
    else if(y>=1919)
    {
        dd = gregorian_leap_year(y) ? "12" : "13";
    }
    else{
        dd = "26";
    }
    
    return dd+"."+mm+"."+yyyy;

}