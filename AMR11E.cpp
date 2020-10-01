#include<bits/stdc++.h>
using namespace std;
#define MAX 501

bool prime[501];
void seive_of_eratosthenes()
{
    memset(prime,true,sizeof(prime));
    for(int i=2;i<MAX;i++)
    {
        if(prime[i]==true)
        {
            for(int p=i*i;p<MAX;p+=i)
                prime[p]=false;
        }
    }
}

int main()
{
    seive_of_eratosthenes();
    vector<int> v,ans;
    for(int i=2;i<MAX;i++)
    {
        if(prime[i])
            v.push_back(i);
    }
    for(int i=30;i<3000;i++)
    {
        int count=0;
        for(int j=0;j<v.size();j++)
        {
            if(i%v[j]==0)
                count+=1;
            if(count==3)
                break;
        }
        if(count==3)
            ans.push_back(i);
    }
    sort(ans.begin(),ans.end());
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ans[n-1]<<endl;
    }
    return 0;
}