int findAns(const vector<int> &A, int low, int high, int B, int findLow){
    int ans=-1;
    while(low<=high){
        int mid = low + ((high-low)>>1);
        if(A[mid]<B){
            low=mid+1;
        }
        else if(A[mid]>B){
            high=mid-1;
        }
        else if(A[mid]==B){
            ans=mid;
            if(findLow)
                high=mid-1;
            else
                low=mid+1;
        }
    }
    return ans;
}
vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int low = 0, high = A.size()-1;
    int first = findAns(A,low,high,B,1);
    int last = findAns(A,low,high,B,0);
    return {first,last};
}