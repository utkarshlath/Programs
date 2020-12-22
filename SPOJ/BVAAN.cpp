#include<bits/stdc++.h>
using namespace std;

int LCS(int dp[101][101][101], string s1, string s2, int len, int i, int j)
{
    if(len==0)
        return 0;
        
    if(dp[i][j][len]!=-1)
        return dp[i][j][len];

    if(i==s1.length()||j==s2.length())
        return INT_MIN;

    int ans;

    if(s1[i]==s2[j])
    {
        ans = max(LCS(dp,s1,s2,len-1,i+1,j+1)+int(s1[i]),max(LCS(dp,s1,s2,len,i+1,j),LCS(dp,s1,s2,len,i,j+1)));
    }
    else
    {
        ans = max(LCS(dp,s1,s2,len,i+1,j),LCS(dp,s1,s2,len,i,j+1));
    }
    dp[i][j][len]=ans;
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        int len;
        cin>>s1>>s2>>len;
        int dp[101][101][101];
        memset(dp,-1,sizeof(dp));
        int val = LCS(dp,s1,s2,len,0,0);
        if(val<=0)
            cout<<0<<endl;
        else
            cout<<val<<endl;
    }
    return 0;
}