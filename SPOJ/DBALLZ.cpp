#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int totalE, len;
        cin>>totalE>>len;
        vector<int> energy(len), time(len);
        for(int i=0;i<len;i++)
            cin>>energy[i];
        for(int i=0;i<len;i++)
            cin>>time[i];
        int dp[len+1][totalE+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=len;i++)
        {
            for(int j=1;j<=totalE;j++)
            {
                if(energy[i-1]<=j)
                    dp[i][j] = max(dp[i-1][j],time[i-1]+dp[i][j-energy[i-1]]);
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        cout<<dp[len][totalE]<<endl;
    }
    return 0;
}