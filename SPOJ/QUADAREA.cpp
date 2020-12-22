#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double area,a,b,c,d,s;
        cin>>a>>b>>c>>d;
        s = (a+b+c+d)/2;
        area = sqrt((s-a)*(s-b)*(s-c)*(s-d));
        printf("%.2lf\n",area);
    }
    return 0;
}