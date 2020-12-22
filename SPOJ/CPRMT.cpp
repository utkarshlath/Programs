#include<bits/stdc++.h>
using namespace std;

int main()
{
    string line1,line2;
    while(cin>>line1)
    {
        int f1[26],f2[26];
        memset(f1,0,sizeof(f1));
        memset(f2,0,sizeof(f2));
        cin>>line2;
        for(int i=0;i<line1.length();i++)
        {
            int x = line1[i];
            ++f1[x-97];
        }
        for(int i=0;i<line2.length();i++)
        {
            int x = line2[i];
            ++f2[x-97];
        }
        for(int i=0;i<26;i++)
        {
            int freq = min(f1[i],f2[i]);
            for(int j=0;j<freq;j++)
                cout<<char(i+97);
        }
        cout<<endl;
    }
    return 0;
}