#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> s;
    int t;
    cin>>t;
    while(t--)
    {
        string expression,output;
        cin>>expression;
        int l = expression.length();
        for(int i=0;i<l;i++)
        {
            if(expression[i]=='(')
                s.push('(');
            else if(expression[i]>='a'&&expression[i]<='z')
                output += expression[i];
            else if(expression[i]==')')
            {
                while(s.top()!='(')
                {
                    output += s.top();
                    s.pop();
                }
                s.pop();
            }
            else
                s.push(expression[i]);
        }
        cout<<output<<endl;
    }
}