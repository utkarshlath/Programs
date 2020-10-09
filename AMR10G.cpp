#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long int height[n];
        for(int i=0;i<n;i++)
            cin>>height[i];
        if(k==1)
        {
            cout<<0<<endl;
            continue;
        }
        sort(height,height+n);
        long long int min=INT_MAX;
        for(int i=k-1;i<n;i++)
            if((height[i]-height[i-k+1])<min)
                min = height[i]-height[i-k+1];
        cout<<min<<endl;
    }
    return 0;
}