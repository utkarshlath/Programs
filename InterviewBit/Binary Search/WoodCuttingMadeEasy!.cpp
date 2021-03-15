long long int findElement(vector<int> &A, int B){
    long long int high = *max_element(A.begin(),A.end());
    long long int low = *min_element(A.begin(),A.end());
    long long int ans=-1;
    while(low<=high){
        long long int mid= low + ((high-low)>>1);
        long long int sum=0;
        for(long long int i=0;i<A.size();i++){
            if(A[i]>mid)
                sum+=(A[i]-mid);
        }
        if(sum<B){
            high=mid-1;
        }
        else{
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}

int Solution::solve(vector<int> &A, int B) {
    long long int ans = findElement(A,B);
    return ans;
}
