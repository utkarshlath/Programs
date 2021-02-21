#define MOD 1000000007
long long int power(long long int a, long long int N){
    if(N==0)
        return 1;
    if(N==1)
        return a;
    int temp = (1ll*power(a,N/2))%MOD;
    if(N%2==0)
        return (1ll*temp*temp)%MOD;
    return ((((1ll*temp*a)%MOD)*temp)%MOD)%MOD;
}
long long int factorial(long long int a)
{
    long long int ans=1;
    for(int i=1;i<=a;i++){
        ans *= i;
        ans %= MOD;
    }
    return ans;
}
int Solution::solve(int A, vector<int> &B) {
    sort(B.begin(),B.end());
    int gap = A-B.size();
    vector<int> gaps;
    gaps.push_back(B[0]-1);
    for(int i=0;i<B.size()-1;i++)
        gaps.push_back(B[i+1]-B[i]-1);
    gaps.push_back(A+1-B.back()-1);
    
    long long int ans=factorial(gap);
    for(int i=0;i<gaps.size();i++)
    {
        ans*=(power(factorial(gaps[i]),1000000005)%MOD);
        ans%=MOD;
    }
    long long int z=1;
    for(int i=0;i<gaps.size();i++){
        if(i==0||i==gaps.size()-1||gaps[i]<2)
            continue;
        else{
            z *= (power(2,gaps[i]-1)%MOD);
            z%=MOD;
        }
    }
    ans = (ans*z)%MOD;
    return ans;
}