#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    float ans=0,of=0,oh=0,tf=0;
    string inp;
    while(n--)
    {
        cin>>inp;
        if(inp[0]=='3'&&inp[2]=='4')
            tf+=1;
        else if(inp[0]=='1'&&inp[2]=='4')
            of+=1;
        else if(inp[0]=='1'&&inp[2]=='2')
            oh+=1;
    }
    ans += min(tf,of);
    tf-=ans;of-=ans;
    ans += 0.75*tf + 0.25*of;
    ans = ceil(ans);
    ans += ceil(oh*0.5);
    cout<<ans+1;
    return 0;
}
