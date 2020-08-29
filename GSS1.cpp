#include<bits/stdc++.h>
using namespace std;

void construct_tree(int arr[], int seg[], int low, int high, int pos)
{
    if(low==high)
    {
        seg[pos]=arr[low];
        return;
    }
    int mid = (low+high)/2;
    construct_tree(arr,seg,low,mid,2*pos+1);
    construct_tree(arr, seg, mid+1,high,2*pos+2);
    seg[pos] = max(seg[2*pos+1],max(seg[2*pos+2], seg[2*pos+1]+seg[2*pos+2]));
}

int solveQuery(int seg[], int qlow, int qhigh, int low, int high, int pos)
{
    if(qlow<=low&&high<=qhigh)
        return seg[pos];
    if(qlow>high||low>qhigh)
        return INT_MIN;
    int mid = (low+high)/2;
    return max(solveQuery(seg,qlow,qhigh,low,mid,2*pos+1),solveQuery(seg,qlow,qhigh,mid+1,high,2*pos+2));
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int seglen;
    if((ceil(log2(n))==floor(log2(n))))
        seglen = n*2-1;
    else
        seglen = pow(2,(ceil(log2(n))))*2-1;
    int seg[seglen];
    for(int i=0;i<seglen;i++)
        seg[i]=INT_MIN;
    construct_tree(arr,seg,0,n-1,0);
    int m;
    cin>>m;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        cout<<solveQuery(seg,x-1,y-1,0,n-1,0)<<endl;
    }
    return 0;
}