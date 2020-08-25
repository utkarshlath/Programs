#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,sum=0,i;
        cin>>n;
        for(i=1;;i++)
        {
            if(sum>=n)
                break;
            sum+=i;
        }
        --i;
        long long int term = n-(((i-1)*(i))/2);
        if(i%2==0)
            cout<<"TERM "<<n<<" IS "<<term<<"/"<<(i+1-term)<<endl;
        else
            cout<<"TERM "<<n<<" IS "<<(i+1-term)<<"/"<<term<<endl;
    }
    return 0;
}