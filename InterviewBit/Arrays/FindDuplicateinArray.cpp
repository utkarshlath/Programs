int Solution::repeatedNumber(const vector<int> &A) {
    vector<int> check(A.size(),0);
    for(int i=0;i<A.size();i++)
    {
        if(check[A[i]]==0)
            check[A[i]]=1;
        else
            check[A[i]]+=1;
    }
    for(int i=0;i<A.size();i++)
    {
        if(check[i]>1)
            return i;
    }
    return -1;
}