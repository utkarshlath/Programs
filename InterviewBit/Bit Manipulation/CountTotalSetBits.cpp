#define MOD 1000000007
int Solution::solve(int A) {
    long long int ans=0,p=0;
    if(A==0)
        return 0;
    while(pow(2,p)<=A)
        p++;
    p--;
    ans+=p*pow(2,p)/2+(A-pow(2,p)+1)+solve(A-pow(2,p));
    ans%=MOD;
    return ans;
}
