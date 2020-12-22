#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> men,women;
        int sum=0,input;
        for(int i=0;i<n;i++)
        {
            cin>>input;
            men.push_back(input);
        }
        for(int i=0;i<n;i++)
        {
            cin>>input;
            women.insert(women.begin()+i,input);
        }
        sort(men.begin(), men.end()); 
        sort(women.begin(), women.end());
        for(int i=0;i<n;i++)
        {
            sum+=men[i]*women[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}