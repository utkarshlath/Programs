#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        while(n)
        {
            n=n/5;
            count+=n;
        }
        cout<<count<<endl;
    }
    return 0;
}