#include<bits/stdc++.h>
using namespace std;

long long int maximum(long long int n, vector<long long int> dp)
{
    if(dp[n]!=-1)
        return dp[n];
    if(n<10)
    {
        dp[n]=n;
        return n;
    }
    long long int value = max(n, maximum((n/2),dp)+maximum((n/3),dp)+maximum((n/4),dp));
    dp[n]=value;
    return value;
}
int main()
{
    long long int n;
    vector <long long int> dp(1000000,-1);
    while((scanf("%lld",&n)==1))
        cout<<maximum(n,dp);
    return 0;
}