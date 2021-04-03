int Solution::solve(vector<int> &A) {
    int n = A.size();
    if(n%2){
        int ans=0;
        for(int i=0;i<n;i+=2)
            ans^=A[i];
        return ans;
    }
    return 0;
}
