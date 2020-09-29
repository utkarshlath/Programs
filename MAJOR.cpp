#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if(n==0)
        {
            cout<<"NO\n";
            continue;
        }
        if(n==1)
        {
            cout<<"YES "<<arr[0]<<endl;
            continue;
        }
        sort(arr,arr+n);
        int count=1,flag=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])
                count+=1;
            else if(arr[i]!=arr[i-1])
                count=1;
            
            if(count>(n/2))
            {
                cout<<"YES "<<arr[i]<<endl;
                flag=1;
                break;
            }
        }       
        if(flag==0)
            cout<<"NO\n";
    }
    return 0;
}