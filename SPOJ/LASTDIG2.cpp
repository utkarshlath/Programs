#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[1000];
        long long int res,b;
        scanf("%s %lld",a,&b);   
        int base = a[strlen(a)-1]-'0';
        if(base==0&&b==0)
            res=0;
        else if(b==0)
            res=1;
        else
        {
            int exp = b%4;
            if(exp==0)
                res = pow(base,4);
            else
                res = pow(base,exp);
        }
        cout<<res%10<<endl;
    }
    return 0;
}