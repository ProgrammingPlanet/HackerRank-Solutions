string timeInWords(int h, int m) 
{
    vector<string> hours = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"};
    vector<string> minutes = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen", "twenty","twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};

    string hour, result;

    if (m == 0) {
        hour = hours[h - 1];
        result = hour+" o' clock";
    }
    else if (m == 1) {
        hour = hours[h - 1];
        result = "one minute past "+ hour;
    }
    else if (m == 10) {
        hour = hours[h - 1];
        result = "ten minutes past "+hour;
    }
    else if (m == 15) {
        hour = hours[h - 1];
        result = "quarter past "+ hour;
    }
    else if (m == 30) {
        hour = hours[h - 1];
        result = "half past "+ hour;
    }
    else if (m == 40) {
        hour = hours[h];
        result = "twenty minutes to "+ hour;
    }
    else if (m == 45) {
        hour = hours[h];
        result = "quarter to "+ hour;
    }
    else if (m < 30) {
        hour = hours[h - 1];
        result = minutes[m - 1]+" minutes past "+hour;
    }
    else if (m > 30) {
        hour = hours[h];
        result = minutes[60 - m - 1]+" minutes to "+ hour;
    }
    
    return result;
}