#include<bits/stdc++.h>
using namespace std;

int main()
{   
    while(true)
    {
        int n;
        cin>>n;
        if(n==0)
            break;
        string s;
        cin>>s;
        int length = s.length();
        char matrix[length/n][n];
        for(int i=0,count=0;i<length;i+=n,count++)
        {
            string sub = s.substr(i,n);
            if(count%2==1) 
                reverse(sub.begin(), sub.end()); 
            for(int j=0;j<n;j++)
                matrix[count][j]=sub[j];
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<length/n;j++)
                cout<<matrix[j][i];
        cout<<endl;
    }
}