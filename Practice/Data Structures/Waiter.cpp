vector<int> Sieve_of_Eratosthenes(int n)
{
    vector<int> primes, tmp(n-1);

    for(int i=2; i<=n; i++)
    {
        tmp[i-2] = i;
    }


    for(int i=0; i<n-1; i++)
    {
        if(tmp[i] != -1)
        {
            for(int j=i+tmp[i]; j<n-1; j += tmp[i])
            {
                tmp[j] = -1;
            }
        }
    }

    for(int x: tmp)
    {
        if(x != -1)
        {
            primes.push_back(x);
        }
    }

    return primes;
}


vector<int> waiter(vector<int> number, int q) {
    
    vector<int> ans, A, B, primes = Sieve_of_Eratosthenes(9735); //will gives first 1200 prime numbers

    for(int i=0; i<q; i++)
    {
        B.clear();
        A.clear();
        for(int j=0; j<number.size(); j++)
        {
            if(number[j]%primes[i] != 0)
            {
                A.push_back(number[j]);
            }
            else{
                B.push_back(number[j]);
            }
        }
        ans.insert(ans.end(), B.begin(), B.end());
        if(i < q-1)
        {
            reverse(A.begin(), A.end());
            number = A;
        }
        else{
            ans.insert(ans.end(), A.begin(), A.end());
        }
    }
    return ans;
}