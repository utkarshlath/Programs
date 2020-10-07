#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        int a[m];
        for(int i=0;i<m;i++)
            cin>>a[i];
        cin>>n;
        int b[n];
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+m);
        sort(b,b+n);
        /*for(int i=0;i<m;i++)
            cout<<a[i];
        cout<<endl;
        for(int i=0;i<n;i++)
            cout<<b[i];*/
        int diff = INT_MAX,i=0,j=0;
        while(i<m&&j<n)
        {
            if(abs(a[i]-b[j])<diff)
                diff = abs(a[i]-b[j]);
            if(a[i]<b[j])
                i++;
            else
                j++;
        }
        while(i<m)
        {
            if(abs(a[i]-b[n-1])<diff)
                diff = abs(a[i]-b[n-1]);
            i++;
        }
        while(j<n)
        {
            if(abs(a[m-1]-b[j])<diff)
                diff = abs(a[m-1]-b[j]);
            j++;
        }
        cout<<diff<<endl;
    }
    return 0;
}