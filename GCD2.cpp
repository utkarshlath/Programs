#include<bits/stdc++.h>
using namespace std;

int mod(string num, int a) 
{ 
    int res = 0; 
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
    return res; 
} 
string gcd(string a, int b)
{
    if(b==0)
        return a;
    string x = to_string(b);
    return gcd(x,mod(a,b));
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        string a;
        int b;
        cin>>b>>a;
        cout<<gcd(a,b)<<endl;
    }
    return 0;
}