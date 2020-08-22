#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ng,nm,p,q;
        cin>>ng>>nm;
        vector<int> g(ng),m(nm);
        for(int i=0;i<ng;i++)
            cin>>g[i];
        for(int i=0;i<nm;i++)
            cin>>m[i];
        sort(g.begin(),g.end());
        sort(m.begin(),m.end());
        for(p=0,q=0;(p<ng)&&(q<nm);)
        {
            if(g[p]>=m[q])
                q++;
            else
                p++;
        }
        if(p==ng)
            cout<<"MechaGodzilla"<<endl;
        else if(q==nm)
            cout<<"Godzilla"<<endl;
    }
}