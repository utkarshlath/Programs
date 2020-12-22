#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    long long int t,count=0;
    long double r;
    cin>>t;
    while(t--)
    {
        cin>>r;
        count+=1;
        printf("Case %d: %.2Lf\n",count,(4*r*r+0.25));
    }
    return 0;
}