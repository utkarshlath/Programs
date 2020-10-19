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
void reverseArr(int arr[], int start, int end)
{
    for(int i=start,j=0;i<=((start-end)/2);i++,j++)
        swap(arr[i],arr[end-j]);
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
        /*for(int i=0;i<n;i++)
            cout<<arr[i];
            cout<<endl;*/
        swap(arr[j],arr[idx]);
        /*for(int i=0;i<n;i++)
            cout<<arr[i];
            cout<<endl;*/
       // reverseArr(arr,j+1,n-1);
        sort(arr+j+1,arr+n);
        for(int i=0;i<n;i++)
            cout<<arr[i];
        cout<<endl;
    }
    return 0;
}