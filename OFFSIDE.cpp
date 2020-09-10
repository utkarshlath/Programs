#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(true)
    {
        int a,d;
        cin>>a>>d;
        if(a==0&&d==0)
            break;
        vector<int> attack(a), defend(d);
        for(int i=0;i<a;i++)
            scanf("%d",&attack[i]);
        for(int j=0;j<d;j++)
            scanf("%d",&defend[j]);
        sort(attack.begin(),attack.end());
        sort(defend.begin(),defend.end());
        if(attack[0]<defend[0]||(attack[0]>=defend[0]&&attack[0]<defend[1]))
            cout<<"Y"<<endl;
        else 
            cout<<"N"<<endl;
    }
    return 0;
}