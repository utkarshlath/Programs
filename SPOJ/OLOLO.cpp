#include<iostream>
#include<algorithm>
#include<set>
#include <iterator>
using namespace std;

int main()
{
    long int n,i,x;
    cin>>n;

    set<long int> s1,s2,result;

    for(i=0;i<n;i++)
    {
        scanf("%ld",&x);
        if((s1.find(x) == s1.end()))
            s1.insert(x);
        else
            s2.insert(x);
    }

    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(result, result.end()));

    for (long int x : result)
        cout << x <<endl; 

    return 0;
}