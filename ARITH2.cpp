#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    getchar();
    while(t--)
    {
        long long int a,ans=0;
        int flag=0;
        char b,op;
        while(true)
        {
            if(flag==0)
                cin>>a;
            start:
            cin>>b;
            if(b=='=')
                break;
            if(b==' ')
                goto start;
            if(b=='+'||b=='-'||b=='*'||b=='/')
                {op = b;goto start;}
            b=b-'0';
            if(flag==0){
            if(op=='+')
                ans += a+b;
            else if(op=='-')
                ans += a-b;
            else if(op=='/')
                ans += a/b;
            else if(op=='*')
                ans += a*b;
            }
            else{
                if(op=='+')
                ans +=b;
            else if(op=='-')
                ans -= b;
            else if(op=='/')
                ans /= b;
            else if(op=='*')
                ans *= b;
            }
            flag+=1;

        }
        cout<<ans<<endl;
    }
    return 0;
}