#include<iostream>
using namespace std;

typedef unsigned long long int ull;

int main()
{
    ull t;
    cin>>t;
    while(t--)
    {
        ull k;
        cin>>k;
        cout<<(192+(k-1)*250)<<endl;
    }
    return 0;
}