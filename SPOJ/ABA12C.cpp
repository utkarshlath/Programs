#include<bits/stdc++.h>
using namespace std;
#define INF 1000000

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> val(k),weight,cost;
        for(int i=0;i<k;i++)
        {
            cin>>val[i];
            if(val[i]!=-1)
            {
                cost.push_back(val[i]);
                weight.push_back(i+1);
            }
        }
    
        int wsize = weight.size();
        int dp[wsize+1][k+1];
        memset(dp,0,sizeof(dp));

        for(int i=0;i<=k;i++)
            dp[0][i]=INF;

        for(int i=1;i<=wsize;i++)
        {
            for(int j=1;j<=k;j++)
            {
                if(weight[i-1]<=j)
                    dp[i][j]=min(dp[i-1][j],cost[i-1]+dp[i][j-weight[i-1]]);
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        if(dp[wsize][k]==INF)
            cout<<-1<<endl;
        else
            cout<<dp[wsize][k]<<endl;
    }
    return 0;
}