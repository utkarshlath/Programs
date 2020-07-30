#include<iostream>
using namespace std;

int rev(int num)
{
    int reverse=0;
    while(num)
    {
        reverse = reverse*10 + num%10;
        num=num/10;
    }
    return reverse;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int num1,num2;
        cin>>num1>>num2;
        cout<<rev((rev(num1)+rev(num2)))<<endl;
    }
    return 0;
}