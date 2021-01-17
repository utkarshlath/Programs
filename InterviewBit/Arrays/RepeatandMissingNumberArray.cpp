vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> check(A.size()+1,0);
    vector<int> output;
    for(int i=0;i<A.size();i++)
    {
        if(check[A[i]]==0)
            check[A[i]]=1;
        else
            output.push_back(A[i]);
    }
    for(int i=1;i<check.size();i++)
    {
        if(check[i]==0)
        {
            output.push_back(i);
            break;
        }
    }
    return output;
}