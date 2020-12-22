#include<iostream>
using namespace std;

int main()
{
    while(true)
    {
        int n;
        cin>>n;
        if(!n)
            break;
        int arr[n+1],flag=0;
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        for(int i=1;i<=n;i++)
            if(!(arr[arr[i]]==i))
                flag=1;
        if(flag)
            cout<<"not ambiguous"<<endl;
        else
            cout<<"ambiguous"<<endl;
    }
    return 0;
}