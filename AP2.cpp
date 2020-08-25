#include<iostream>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n1,n2,n3,n,a,d,i;
        cin>>n1>>n2>>n3;
        n = (2*n3)/(n1+n2);
        cout<<n<<endl;
        d = (n2-n1)/(n-5);
        a = n1 - 2*d;
        for(i=1;i<=n;i++)
            cout<<a+(i-1)*d<<" ";
        cout<<endl;
    }
}