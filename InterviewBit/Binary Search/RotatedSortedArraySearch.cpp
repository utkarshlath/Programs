int Solution::search(const vector<int> &A, int B) {
    int n=A.size();
    int left=0,right=n-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(A[mid]==B)
            return mid;
        else if(A[0]<=A[mid]){
            if(A[0]<=B&&B<A[mid])
                right=mid-1;
            else
                left=mid+1;
        }
        else{
            if(A[mid]<B&&B<=A[n-1])
                left=mid+1;
            else
                right=mid-1;
        }
    }
    return -1;
}
