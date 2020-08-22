#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    long long int t,scenario=1;
    cin>>t;
    while(t--)
    {
        long long int amount,friends,sum=0,j;
        cin>>amount>>friends;
        vector<long long int> arr(friends);
        for(long long int i=0;i<friends;i++)
            cin>>arr[i];
        sort(arr.begin(),arr.end(),greater<int>());
        for(j=0;j<friends;j++)
        {
            sum+=arr[j];
            if(sum>=amount)
                break;           
        }
        if(sum>=amount)
            cout<<"Scenario #"<<scenario<<":"<<endl<<j+1<<endl;
        else
            cout<<"Scenario #"<<scenario<<":"<<endl<<"impossible"<<endl;
        scenario++;
    }
    return 0;
}