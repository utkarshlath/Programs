#include<bits/stdc++.h>
using namespace std;

long long int memo[10001];

long long int findResult(long long int arr[], long long int n)
{
    if(n<0)
        return 0;
    if(memo[n]!=-1)
        return memo[n];
    return memo[n]= max(findResult(arr,n-2)+arr[n],findResult(arr,n-1));
}

int main()
{
    long long int t,caseno=0;
    cin>>t;
    while(t--)
    {
        caseno++;
        memset(memo,-1,sizeof(memo));
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
            cin>>arr[i];
        memo[0]=arr[0];
        memo[1]=max(arr[0],arr[1]);
        cout<<"Case "<<caseno<<": "<<findResult(arr,n-1)<<endl;
    }
    return 0;
}