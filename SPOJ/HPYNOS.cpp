#include<iostream>
using namespace std;

long long int findSum(long long int n)
{
    long long int sum=0;
    while(n)
    {
        sum+= (n%10)*(n%10);
        n=n/10;
    }
    return sum;
}
int main()
{
    long long int n,count=0;
    cin>>n;
    int memo[10000]={0},hit=0;;
    while(true)
    {
        long long int sum = findSum(n);
        if(memo[sum]==0)
        {
            memo[sum]=1;
            count+=1;
            n=sum;
        }
        else
        {
            hit=1;
            count+=1;
            break;
        }
        if(sum==1)
            break;
    }
    if(hit==1)
        cout<<-1<<endl;
    else
        cout<<count<<endl;
}