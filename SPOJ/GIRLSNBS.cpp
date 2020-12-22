#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(true)
    {
        float a,b;
        cin>>a>>b;
        if(a==-1&&b==-1)
            break;
        if(a==0||b==0)
            cout<<max(a,b)<<endl;
        else
            cout<<ceil(max(a,b)/(min(a,b)+1))<<endl;    
    }
    return 0;
}