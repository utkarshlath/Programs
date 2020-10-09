#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll gcd = __gcd(a,b);
        cout<<b/gcd<<" "<<a/gcd<<endl;
    }
    return 0;
}