int Solution::cntBits(vector<int> &A) {
    long long int sum=0;
    for(int i=0;i<32;i++){
        int one=0;
        for(int j=0;j<A.size();j++){
            if(A[j]&(1<<i))
                one++;
        }
        sum+=one*(A.size()-one)*2;
        sum%=1000000007;
    }
    return sum;
}
