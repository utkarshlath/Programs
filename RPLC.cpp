#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t,count=0;
    cin>>t;
    while(t--)
    {
        ++count;
        ll n;
        cin>>n;
        ll val[n];
        int flag=0;
        for(ll i=0;i<n;i++)
        {
            cin>>val[i];
            if(val[i]<0)
                flag=1;
        }
        if(flag==0)
            {cout<<"Scenario #"<<count<<": "<<1<<endl;continue;}
        ll sum=0, max=1,temp=0;
        for(ll i=0;i<n;i++)
        {
            sum+=val[i];
            if(sum<=0)
                temp = sum*(-1) +1;
            if(temp>max)
                max = temp;
        }
        cout<<"Scenario #"<<count<<": "<<max<<endl;
    }
    return 0;
}