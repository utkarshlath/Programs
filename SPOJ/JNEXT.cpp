#include<bits/stdc++.h>
using namespace std;

int findNum(int j, int arr[],int n)
{
    int idx,min=INT_MAX;
    for(int i=j+1;i<n;i++)
    {
        if((arr[i]-arr[j])>0&&(arr[i]-arr[j])<min)
        {
            idx=i;
            min = (arr[i]-arr[j]);
        }
    }
    return idx;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int check=0;
        for(int i=0;i<n-1;i++)
            if(arr[i]<arr[i+1])
            {
                check=1;
                break;
            }
        if(check==0)
        {
            cout<<-1<<endl;
            continue;
        }
        for(j=n-2;j>=0;j--)
        {
            if(arr[j]<arr[j+1])
                break;
        }
        int idx = findNum(j, arr, n); 
        swap(arr[j],arr[idx]);
        sort(arr+j+1,arr+n);
        for(int i=0;i<n;i++)
            cout<<arr[i];
        cout<<endl;
    }
    return 0;
}