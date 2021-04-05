string twoArrays(int k, vector<int> A, vector<int> B) 
{
    for(int i=0; i<A.size(); i++)
    {
        int min_indx = -1;
        for(int j=0; j<B.size(); j++)
        {
            if(B[j]!=-1 and A[i]+B[j]>=k)
            {
                if(min_indx==-1 or B[j]<B[min_indx])
                {
                    min_indx = j;
                }
            }
        }
        if(min_indx == -1)
        {
            return "NO";
        }
        else{
            B[min_indx] = -1;
        }
    }
    return "YES";
}