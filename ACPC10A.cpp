#include<iostream>
using namespace std;

int main()
{
    while(true)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0)
            break;
        if(b-a==c-b)
            cout<<"AP "<<(2*c-b)<<endl;
        else
            cout<<"GP "<<(c*c)/b<<endl;
    }
}