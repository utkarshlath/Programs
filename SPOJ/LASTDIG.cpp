#include<iostream>
using namespace std;

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if ((b%2)==1)  // equivalent to (b&1)
            res = (res * a) % m;
        a = (a * a) % m;
        b=b/2;         // equivalent to b >>= 1;
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        long long result = binpow(a,b,10);
        cout<<result<<endl;
    }
    return 0;
}