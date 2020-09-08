#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
    return true;
}
int findLower(vector<int> v, int n)
{
    int i;
    for(i=0;i<v.size();i++)
    {
        if(v[i]>n)
            break;
    }
    if(i==0)
        return INT_MAX;
    else
        return v[i-1];
}
int findUpper(vector<int> v, int n)
{
    int i;
    for(i=0;i<v.size();i++)
    {
        if(v[i]>n)
            break;
    }
    if(i==v.size())
        return INT_MAX;
    else
        return v[i];
}
int main()
{
    vector<int> v;
    vector<int>::iterator lower,upper;  
    for(int i=65;i<=90;i++)
        if(isPrime(i))
            v.push_back(i);
    for(int i=97;i<=122;i++)
        if(isPrime(i))
            v.push_back(i);
    // for(int x: v)
    // {
    //     cout<<x<<"\t";
    // }
    // cout<<endl;
    // // lower = lower_bound (v.begin(), v.end(), 75);  
    // // upper = upper_bound (v.begin(), v.end(), 75);
    // // cout<<"Lower: "<<*lower<<"Upper: "<<*upper<<endl;
    // // int l = v[lower - v.begin()], u = v[upper - v.begin()];
    // int l = findLower(v,69);
    // int u = findUpper(v,69);
    // cout<<"L: "<<l<<"U: "<<u<<endl;

    //return 0;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(v.end()!=find(v.begin(), v.end(), int(s[i])))
                cout<<s[i];
            else
            {
                int l = findLower(v,s[i]);  
                int u = findUpper(v,s[i]);
                if(abs(int(s[i]-l))<=abs(u-int(s[i])))
                    cout<<char(l);//<<endl<<"u: "<<" "<<u<<abs(int(s[i])-u)<<endl<<"l: "<<l<<" "<<abs(l-int(s[i]));
                else
                    cout<<char(u);//<<endl<<"u: "<<" "<<u<<abs(int(s[i])-u)<<endl<<"l: "<<l<<" "<<abs(l-int(s[i]));
            }
        }
        cout<<endl;
    }
}