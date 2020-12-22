#include<bits/stdc++.h>
using namespace std;

int insertPalindrome(string s, int len)
{
    int memo[len][len];
    memset(memo,0,sizeof(memo));
    int l,h,diag;
    for(int diag=1;diag<len;diag++)
    {
        for(int l=0,h=diag;h<len;h++,l++)
        {
            if(s[l]==s[h])
                memo[l][h] = memo[l+1][h-1];
            else
                memo[l][h] = 1+min(memo[l+1][h],memo[l][h-1]);
        }
    }
    return memo[0][len-1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        string s;
        cin>>s;
        count = insertPalindrome(s, s.length());
        cout<<count<<endl;
    }
    return 0;
}