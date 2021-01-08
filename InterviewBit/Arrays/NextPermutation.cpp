vector<int> Solution::nextPermutation(vector<int> &A) {
    vector<int> ans = A;
    sort(ans.begin(),ans.end(),greater<int>());
    if(ans==A)
    {
        sort(A.begin(),A.end());
        return A;
    }
    int n = A.size();
    int index=-1;
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            index=i;
            break;
        }
    }
    sort(A.begin() + index + 1, A.end());
    for (int i=index+1; i<n; i++) {
        if (A[i] > A[index]) {
            swap(A[i],A[index]);
            break;
        }
    }
    return A;
}