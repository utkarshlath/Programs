#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector <long long int> vect(n);
        for(long int i=0;i<n;i++)
        {    
            cin>>vect[i];
            vect[i]=vect[i]%n;
        }
        long long int sum = accumulate(vect.begin(), vect.end(), 0);
        if(sum%n==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}