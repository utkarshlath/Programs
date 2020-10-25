#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(true)
    {
        long long int t;
        cin>>t;
        if(t==0)
            break;
        long long int c[t],p[t];
        for(long long int i=0;i<t;i++)
            cin>>c[i];
        for(long long int i=0;i<t;i++)
            cin>>p[i];
        long long int sum=0;
        sort(c,c+t);
        sort(p,p+t,greater<long long int>()); 
        for(int i=0;i<t;i++)
            sum+=c[i]*p[i];
        cout<<sum<<endl;
    }
    return 0;
}