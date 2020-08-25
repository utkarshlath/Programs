#include<bits/stdc++.h>
using namespace std;

int matrix[2001][2001];

int findDist(string a, string b, int m, int n)
{
    int i,j;

    for(i= 0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0||j==0)
                matrix[i][j]=max(i,j);
            else if(a[i-1]==b[j-1])
            {
                matrix[i][j]=matrix[i-1][j-1];
            }
            else
            {
                matrix[i][j]=1+min(min(matrix[i-1][j],matrix[i][j-1]),matrix[i-1][j-1]);
            }
        }
    }
    return matrix[m][n];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a;
        cin>>b;
        int m=a.length(), n=b.length();
        if(!m||!n)
        {
            cout<<max(m,n)<<endl;
            continue;
        }
        int result = findDist(a,b,m,n);
        cout<<result<<endl;
    }
    return 0;
}

