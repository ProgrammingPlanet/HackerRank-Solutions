int designerPdfViewer(vector<int> h, string word) 
{
    int max_height = h[word[0]], word_length = word.size(), cur_height;
    
    for(int i=0; i<word_length; i++)
    {
        cur_height = h[word[i]-97];
        max_height = max(max_height,cur_height);
    }
    
    return max_height * word_length;
}