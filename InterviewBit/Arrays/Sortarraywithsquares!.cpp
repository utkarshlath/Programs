vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    vector<int> ans(n);
    int left=0,right=n-1,idx=n-1;
    while(left<=right)
    {
        if(abs(A[left])<abs(A[right]))
        {
            ans[idx--] = A[right]*A[right];
            right--;
        }
        else{
            ans[idx--] = A[left]*A[left];
            left++;
        }
    }
    return ans;
}