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
    int max_so_far = INT_MIN, max_ending_here = 0; 
    for (int i = 0; i < n; i++) 
    { 
        max_ending_here = max_ending_here + v[i]; 
        if (max_so_far < max_ending_here && max_ending_here <= m) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    cout<<total_max;
    return 0;
}