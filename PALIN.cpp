#include<bits/stdc++.h>
using namespace std;

string findSum(string str1, string str2) 
{ 
    string str = ""; 
    if (str1.length() > str2.length()) 
        swap(str1, str2); 
    int n1 = str1.length(), n2 = str2.length(); 

    reverse(str1.begin(), str1.end()); 
    reverse(str2.begin(), str2.end()); 
  
    int carry = 0; 
    for (int i=0; i<n1; i++) 
    { 
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  
    for (int i=n1; i<n2; i++) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  
    if (carry) 
        str.push_back(carry+'0'); 
 
    reverse(str.begin(), str.end()); 
  
    return str; 
}

int main()
{
    long long int t;
    cin>>t;
    string one(1,'1');
    while(t--)
    {
        string str;
        cin>>str;
        str.erase(0, min(str.find_first_not_of('0'), str.size()-1));
        str=findSum(str,one);
        while((string(str.rbegin(),str.rend()))!=str)
            str=findSum(str,one);
        cout<<str<<endl;
    }
    return 0;
}