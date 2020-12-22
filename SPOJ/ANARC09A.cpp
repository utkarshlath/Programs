#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long long int caseno=0;
    while(true)
    {
        ++caseno;
        stack<char> check;
        cin>>s;
        if(s[0]=='-')
            break;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='{')
                check.push(s[i]);
            else if(!check.empty()&&s[i]=='}'&&check.top()=='{')
                check.pop();
            else if(s[i]=='}')
                check.push(s[i]);
        }
        int count1=0,count2=0;
        while(!check.empty())
        {
            if(check.top()=='{')
                count1++;
            else
                count2++;
            check.pop();
        }
        if(count1%2==0&&count2%2==0)
            cout<<caseno<<". "<<(count1+count2)/2<<endl;
        else
            cout<<caseno<<". "<<((count1/2)+(count2/2)+2)<<endl;
    }
    return 0;
}