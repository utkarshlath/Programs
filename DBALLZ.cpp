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
        int dp[totalE+1];
        memset(dp,0,sizeof(dp));
        for (int i=0; i<=totalE; i++)
            for (int j=0; j<len; j++)
                if (energy[j] <= i)
                    dp[i] = max(dp[i], dp[i-energy[j]] + time[j]);
        cout<<dp[totalE]<<endl;
    }
    return 0;
}