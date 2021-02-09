int Solution::hammingDistance(const vector<int> &A) {
    long ans = 0;
    long mod = 1000000007;
    for(int i = 0; i< 32;i++) {
        long count = 0;
        for(int j : A) {
            if((j & (1<<i)))
                count++;
        }
        ans+= (count%mod)*((A.size() - count)%mod)*2;
    }
    return ans % mod;
}