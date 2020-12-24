int Solution::solve(vector<int> &A, int B) {
    int s=0, ans=0, curr, n=A.size();
    while(s<n)
    {
        if(s+B-1 < n)
            curr = s+B-1;
        else
            curr=n-1;
        while(curr>=0 && curr>=(s-B+1) && A[curr]!=1)
            curr--;
        if(curr<(s-B+1) || curr<0)
            return -1;
        s = curr + B;
        ans++;
    }
    return ans;
}
