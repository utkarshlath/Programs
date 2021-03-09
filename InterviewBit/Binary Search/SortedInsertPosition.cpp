int Solution::searchInsert(vector<int> &A, int B) {
    int n = A.size();
    if(B<A[0]){
        return 0;
    }
    if(B>A[n-1])
        return n;
    int low=0,high=n-1;
    int mid;
    while(low<=high){
        mid = low + (high-low)/2;
        if(A[mid]==B)
            return mid;
        else if(A[mid]>B&&A[mid-1]<B)
            return mid;
        else if(A[mid]>B)
            high=mid-1;
        else
            low=mid+1;
    }
    return mid;
}
