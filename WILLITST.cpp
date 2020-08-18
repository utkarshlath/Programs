#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    if(n<=1)
    {
        cout<<"TAK"<<endl;
        return 0;
    }
    if(ceil(log2(n))==floor(log2(n)))
        cout<<"TAK"<<endl;
    else
    cout<<"NIE"<<endl;
    return 0;
}