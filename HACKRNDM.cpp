#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int i,j,count=0;
    for(int i=0,j=0;i<n,j<n;)
    {
        if(arr[j]-arr[i]<k)
            j++;
        else if(arr[j]-arr[i]==k)
        {
            i++;
            count++;
        }
        else 
            i++;
    }
    cout<<count<<endl;
    return 0;
}