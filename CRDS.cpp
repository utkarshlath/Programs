#include<iostream>
using namespace std;

typedef long long int ll;
#define MOD 1000007

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans;
        cin>>n;
        ans = ((n*(n+1))%MOD+((n*(n-1))/2)%MOD)%MOD;
        cout<<ans<<endl;
    }
    return 0;
}