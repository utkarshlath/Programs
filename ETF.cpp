#include<iostream>
using namespace std;

long int phi(long int n){
    long int result = n;
    for (long int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int x,count=0;
        cin>>x;
        cout<<phi(x)<<endl;
    }
    return 0;
}