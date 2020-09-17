#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll n,m,total_max=0;
    cin>>n>>m;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];
    for(ll i=n;i>=1;i--)
    {
        ll max_sum=0,total=0;
        for(ll j=0;j<i;j++)
            total += v[j];
        //max_sum=total;
        for(ll j=i;j<n;j++)
        {
            total = total-v[j-i]+v[j];
            if(total>max_sum&&total<=m)
                max_sum=total;
        } 
        if(max_sum>total_max)
            total_max=max_sum;
        if(total_max==m)
            break;
    }
    cout<<total_max;
    return 0;
}