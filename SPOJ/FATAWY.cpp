#include<bits/stdc++.h>
using namespace std;

bool LCScheck(string s1, string s2, int th)
{
    int m=s1.length(),n=s2.length();
    int dp[m+1][n+1];
    memset(dp,0,sizeof(dp));

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    int len = dp[m][n];
    //cout<<len<<endl;
    float check1 = float(len)/float(m),check2 = float(len)/float(n),match = float(th)/float(100);
    //cout<<check1<<" "<<check2<<" "<<match<<endl;
    if((check1)>=(match)&&(check2)>=(match))
        return true;
    else
        return false;
}
int main()
{
    
    int t,caseno=0;
    cin>>t;
    while(t--)
    {
        caseno+=1;
        int n,th;
        cin>>n>>th;
        string input;
        vector<pair<string,int>> s;
        for(int i=0;i<n;i++)
        {
            cin>>input;
            s.push_back(make_pair(input,0));
        }
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            //int topic=0;
            for(int j=i+1;j<s.size();j++)
            {
                if(LCScheck(s[i].first,s[j].first,th))
                {
                    cout<<s[i].first<<": "<<s[j].first<<endl;
                    if(s[i].second!=0)
                        s[j].second=s[i].second;
                    else
                    {
                        ans+=1;
                        s[i].second=ans;
                        s[j].second=ans;
                    }
                }
            }
            //if(!topic)
            //    ans+=1;
        }
        for(int i=0;i<n;i++)
            if(s[i].second==0)
                ans+=1;
        cout<<"Case #"<<caseno<<":"<<endl<<ans<<endl;
        /*for(int i=0;i<n;i++)
        {
            cout<<s[i].first<<": "<<s[i].second<<endl;
        }*/
    }
    return 0;
}