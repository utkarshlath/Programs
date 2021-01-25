int Solution::solve(int A, int B, int C) {
    int ans = (A+C-1)%B;
    if(ans==0)
        return B;
    return ans;
}