#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(true)
    {
        int n=1;
        stack <int> s;
        cin>>n;
        if(n==0)
            break;
        vector <int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        if(n==1)
        {
            cout<<"yes"<<endl;
            continue;
        }
        int counter =  1;
        for(int i=0;i<n;i++)
        {
            if(v[i]==counter)
            {
                counter+=1;
                continue;
            }
            if(!s.empty()&&counter==s.top())
            {
                s.pop();
                counter+=1;
                i--;
                continue;
            }
            s.push(v[i]);
        }
        while(!s.empty()&&counter==s.top())
        {
            s.pop();
            counter+=1;
        }
        if(s.empty())
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}