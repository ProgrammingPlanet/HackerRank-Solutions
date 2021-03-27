int workbook(int n, int k, vector<int> arr) 
{
    int page = 1, no_problems, spec_probs = 0;
    
    for(int i=0; i<arr.size(); i++)
    {
        no_problems = arr[i];
        
        for(int prob_no=1; prob_no<=no_problems; prob_no += k)
        {
            if((page >= prob_no) and (page <= min(no_problems,prob_no+k-1)))
            {
                spec_probs++;
            }
            page++;
        }

    }
    
    return spec_probs;
}