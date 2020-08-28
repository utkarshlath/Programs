#include<bits/stdc++.h>
using namespace std;

int  solveQuery(int arr[], int n, int x, int y)
{
    int max = INT_MIN, max_x=INT_MIN;
    for(int i=x-1;i<=y-1;i++)
    {
        max_x = arr[i];int sum = arr[i];
        for(int j=i+1;j<=y-1;j++)
        {
            sum+= arr[j];
            if(sum>max_x)
                max_x = sum;
        }
        if(max_x>max)
            max=max_x;
    }
    return max;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int m;
    cin>>m;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        cout<<solveQuery(arr,n,x,y)<<endl;
    }
    return 0;
}