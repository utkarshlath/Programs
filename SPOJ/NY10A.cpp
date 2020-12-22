#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<string> v = {"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT","HHH"};
    while(t--)
    {
        int n,arr[8]={0};
        cin>>n;
        string s;
        cin>>s;
        cout<<n<<" ";
        for(int i=0;i<s.length()-2;i++)
        {
            string check(s,i,3);
            for(int j=0;j<8;j++)
            {
                if(check==v[j])
                {
                    ++arr[j];
                    break;
                }
            }
        }
        for(int j=0;j<8;j++)
            cout<<arr[j]<<" ";
        cout<<endl;
    }
}