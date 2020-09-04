#include<iostream>
using namespace std;

int main()
{
    long long int n,sum;
    while(true)
    {
        int term=1;
        sum=1;
        cin>>n;
        if(n==-1)
            break;
        while(sum<n)
        {
            sum += 6*term;
            term++;
        }
        if(sum==n)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}