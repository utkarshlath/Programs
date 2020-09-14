#include<bits/stdc++.h>
using namespace std;

int t[101][501];

int knapsack(int budget, int cost[], int fun[], int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=budget;j++)
        {
            if(i==0&&j==0)
                t[i][j]=0;
            if(cost[i-1]<=j)
            {
                t[i][j] = max(fun[i-1]+t[i-1][j-cost[i-1]],t[i-1][j]);
            }
            else
                t[i][j]=t[i-1][j];
        }
    }
    int partysum=0, res=t[n][budget];
    for(int i=0;i<=budget;i++)
    {
        if(t[n][i]==res)
        {
            budget = i;
            break;
        }
    }
    for(int i=n;i>0&&res>0;i--)
    {
        if(res==t[i-1][budget])
            continue;
        else
        {
            partysum += cost[i-1];
            budget -= cost[i-1];
            res -= fun[i-1];
        }   
    }
    return partysum;
}
int main()
{
    while(true)
    {
        int budget,n;
        cin>>budget>>n;
        if(budget==0&&n==0)
            break;
        int fun[n], cost[n];
        for(int i=0;i<n;i++)
            cin>>cost[i]>>fun[i];
        memset(t,0,sizeof(t));
        int result = knapsack(budget,cost,fun,n);
        cout<<result<<" "<<t[n][budget]<<endl;
    }
    return 0;
}