#include<bits/stdc++.h>
using namespace std;

long long int findResult(long long int arr[], long long int n)
{
    if(n<0)
        return 0;
    return max(findResult(arr,n-2)+arr[n],findResult(arr,n-1));
}
int main()
{
    long long int t,caseno=0;
    cin>>t;
    while(t--)
    {
        caseno++;
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
            cin>>arr[i];
        cout<<"Case "<<caseno<<": "<<findResult(arr,n-1)<<endl;
    }
    return 0;
}