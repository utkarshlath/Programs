int Solution::singleNumber(const vector<int> &A) {
    int ans=0;
    int x,sum;
    for(int i=0;i<32;i++){
        x = 1<<i;
        sum=0;
        for(int j=0;j<A.size();j++){
            if(A[j]&x)
                sum++ ;
        }
        if(sum%3!=0)
            ans|=x;
    }
    return ans;
}
