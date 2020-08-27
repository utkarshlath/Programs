#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    while(true)
    {
        int l;
        cin>>l;
        if(l==0)
            break;
        float result = (l*l)/(2*M_PI);
        printf("%.2f\n",result);
    }
    return 0;
}