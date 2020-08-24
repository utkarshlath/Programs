#include<bits/stdc++.h>
using namespace std;

void removeSpace(string &s)
{
    long long count=0;
    for(long long int i=0 ;s[i];i++)
    {
        if(s[i]!=' ')
            s[count++] = s[i];
    }
    s[count]='\0';
    s.erase(count+1);
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin.ignore();
        string s;
        getline(cin,s);
        removeSpace(s);
        string op1,op2,op3,check="machula";
        long long i=0;
        for(;i<s.length();)
        {
            if(s[i]=='+')
                break;
            else
                op1+=s[i++];
        }
        ++i;
        for(;i<s.length();)
        {
            if(s[i]=='=')
                break;
            else
                op2+=s[i++];
        }
        ++i;
        for(;i<s.length();)
            op3+=s[i++];
        int flag=0;
        if (op1.find(check) != std::string::npos) {
            flag=1;
        }
        if(flag)
        {
            cout<<(stoi(op3)-stoi(op2))<<" + "<<stoi(op2)<<" = "<<stoi(op3)<<endl;
            continue;
        }
        if (op2.find(check) != std::string::npos) {
            flag=1;
        }
        if(flag)
        {
            cout<<stoi(op1)<<" + "<<(stoi(op3)-stoi(op1))<<" = "<<stoi(op3)<<endl;
            continue;
        }
        cout<<stoi(op1)<<" + "<<stoi(op2)<<" = "<<(stoi(op1)+stoi(op2))<<endl;
    }
    return 0;
}