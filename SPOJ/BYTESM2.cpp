#include<iostream>
using namespace std;

int findResult(int h, int w, int arr[][100])
{
    if(h==1&&w==1)
        return arr[0][0];
    int dp[h][w],max;
    for(int j=0;j<w;j++)
        dp[h-1][j]=arr[h-1][j];
    for(int i=h-2;i>=0;i--)
    {
        for(int j=0;j<w;j++)
        {
            max = -1;
            if(dp[i+1][j]>max)
                max = dp[i+1][j];
            if(j>0&&dp[i+1][j-1]>max)
                max = dp[i+1][j-1];
            if(j<w-1&&dp[i+1][j+1]>max)
                max = dp[i+1][j+1];
            dp[i][j] = max + arr[i][j];
        }
    }
    int sum=-1;
    for(int j=0;j<w;j++)
        if(dp[0][j]>sum)
            sum=dp[0][j];
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,w,arr[100][100];;
        cin>>h>>w;
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++)
                cin>>arr[i][j];
        cout<<findResult(h,w,arr)<<endl;
    }
    return 0;
}