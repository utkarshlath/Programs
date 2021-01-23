int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int n = A.size();
    int count=0;
    for(int i=0;i<n-1;i++)
        if((A[i+1]>A[i])&&((n-(i+1))==A[i]))
            count+=1;
    if(A[n-1]==0)
        count+=1;
    if(count)
        return count;
    return -1;
}