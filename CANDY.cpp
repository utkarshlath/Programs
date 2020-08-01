#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(true)
    {
        int n,input;;
        cin>>n;
        if(n==-1)
            break;
        if(n==0)
        {
            cout<<0<<endl;
            continue;
        }
        vector<int> vect(n);
        for(int i=0;i<n;i++)
        {
            cin>>input;
            vect.insert(vect.begin()+i,input);
        }
        int sum = accumulate(vect.begin(), vect.end(), 0);
        if(sum%n!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        sum=sum/n;
        int count=0;
        for(int i=0;i<n;i++)
        {
            count+= abs(vect[i]-sum);
        }
        cout<<count/2<<endl;
    }
}