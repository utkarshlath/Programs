#include<bits/stdc++.h>
using namespace std;

vector <long long int> dp(1000000,0);

long long int maximum(long long int n)
{
    if (n < 1000000)
    {
        if(n<12)
            return n;
        if(dp[n]!=0)
            return dp[n];
    }
    long long int value = max(n, maximum(n/2)+maximum(n/3)+maximum(n/4));
    if (n<1000000)
        dp[n]=value;
    return value;
}
int main()
{
    long long int n;
    while((scanf("%lld",&n)>0))
        printf("%lld\n",maximum(n));
    return 0;
}