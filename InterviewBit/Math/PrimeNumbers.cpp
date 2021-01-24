vector<int> Solution::sieve(int A) {
    if(A<2)
        return {};
    vector<int> check(A+1,1),prime;
    check[0]=0;
    check[1]=1;
    for(int i=2;i<=sqrt(A);i++)
    {
        if(check[i]==1)
        {
            for(int j=2;i*j<=A;j++)
                check[i*j]=0;
        }
    }
    for(int i=2;i<=A;i++)
        if(check[i]==1)
            prime.push_back(i);
    return prime;
}