#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,d,flag=0;
        cin>>n>>m>>d;
        int soldiers[n];
        for(int i=0;i<n;i++)
        {
            cin>>soldiers[i];
            if(soldiers[i]-d>0)
            {
                if(soldiers[i]%d>0)
                    flag += soldiers[i]/d;
                else
                    flag += soldiers[i]/d -1;
            }
        }
        if(flag>=m)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}