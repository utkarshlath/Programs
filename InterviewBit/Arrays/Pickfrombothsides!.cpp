int Solution::solve(vector<int> &A, int B) {
    int sum=0,ans=0;
    int len = A.size();
    for(int i=len-1;i>=len-B;i--)
        sum+=A[i];
    ans=sum;
    for(int i=0;i<B;i++)
    {
        sum+=A[i]-A[len-B+i];
        ans = max(sum,ans);
    }
    return ans;
}