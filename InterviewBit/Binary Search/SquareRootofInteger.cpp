int Solution::sqrt(int A) {
    if(A==0||A==1)
        return A;
    if(A==2)
        return 1;
    long long int low=0,high=A/2,ans=-1;
    while(low<=high){
        long long int mid=low+ (high-low)/2;
        if(mid*mid==A)
            return mid;
        else if(mid*mid<A){
            ans=mid;
            low=mid+1;
        }
        else if(mid*mid>A){
            high=mid-1;
        }
    }
    return ans;
}