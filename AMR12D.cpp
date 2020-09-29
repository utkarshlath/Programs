#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,check;
        cin>>s;
        check = s;
        reverse(s.begin(),s.end());
        (s!=check)?cout<<"NO\n":cout<<"YES\n";
    }
    return 0;
}