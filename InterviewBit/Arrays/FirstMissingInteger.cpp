int Solution::firstMissingPositive(vector<int> &A) {
    sort(A.begin(),A.end());
    if(A[A.size()-1]<=0)
        return 1;
    int num=1;
    for(int i=0;i<A.size()-1;i++)
    {
        if(A[i]<=0)
            continue;
        else if(A[i]!=num)
            return num;
        else if(A[i]==num)
            num++;
    }
    return A[A.size()-1]+1;
}