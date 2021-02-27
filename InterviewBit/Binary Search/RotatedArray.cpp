int Solution::findMin(const vector<int> &A) {
    int low = 0, high = A.size()-1;
    int N=A.size();
    while(low<=high){
        if(A[low]<=A[high])
            return A[low];
        int mid = (low+high)/2;
        int prev=(mid-1+N)%N, next=(mid+1)%N;
        if (A[mid]<=A[prev]&&A[mid]<=A[next])
            return A[mid];
        else if(A[mid]<=A[high])
            high=mid-1;
        else if(A[mid]>=A[low])
            low=mid+1;
    }
    return -1;
}
