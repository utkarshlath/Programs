#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,fof,m;
    cin>>n;
    set <int> s;
    for(int i=0;i<n;i++)
    {
        cin>>fof>>m;
        s.insert(fof);
        for(int j=0;j<m;j++)
        {
            cin>>fof;
            s.insert(fof);
        }
    }
    cout<<s.size()-n;
    return 0;
}