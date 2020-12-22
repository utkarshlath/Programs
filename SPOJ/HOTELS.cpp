#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll n,m,total_max=0,i=0,count=0;
    cin>>n>>m;
    vector<ll> v(n);
    for(i=0;i<n;++i)
        cin>>v[i];
    for(i=0;i<n;i++)
    {
        if(total_max+v[i]<=m)
        {
            total_max+=v[i];
            count+=1;
        }
        else if(total_max!=0)
        {
            total_max = total_max+v[i] - v[i-count];
        }
    }
    cout<<total_max;
    return 0;
}