#include<bits/stdc++.h>
using namespace std;

int findsum(int prefix1[],int prefix2[],map<int, int> pair1,int n1,int n2)
{
    int sum=0,i=0;
    for(auto itr=pair1.begin();itr!=pair1.end();++itr)
    {
        if(i==0)
        {
            sum = max(prefix1[itr->first],prefix2[itr->second]);
        }
        else
        {
            auto x = itr;
            --x;
            sum = max(sum + prefix1[itr->first]-prefix1[x->first],sum + prefix2[itr->second]-prefix2[x->second]);
        }
        //cout<<sum<<endl;
        ++i;
    }
    auto itr = pair1.end();
    itr--;
    //cout<<prefix1[n1-1]<<" "<<prefix1[itr->first]<<" "<<prefix2[n2-1]<<" "<<prefix2[itr->second]<<endl;
    sum = max(sum+prefix1[n1-1]-prefix1[itr->first],sum+prefix2[n2-1]-prefix2[itr->second]);
    return sum;
}
int main()
{
    while(true)
    {
        int n1,n2;
        cin>>n1;
        if(!n1)
            break;
        int arr1[n1],prefix1[n1];
        
        for(int i=0;i<n1;i++)
        {
            cin>>arr1[i];
            if(i==0)
                prefix1[i]=arr1[i];
            else
                prefix1[i]=prefix1[i-1]+arr1[i];
        }
            
        cin>>n2;
        int arr2[n2],prefix2[n2];
        for(int i=0;i<n2;i++)
        {
            cin>>arr2[i];
            if(i==0)
                prefix2[i]=arr2[i];
            else
                prefix2[i]=prefix2[i-1]+arr2[i];
        }
        map<int, int> pair1;
        for(int i=0;i<n1;i++)
        {
            int num = arr1[i];
            int left=0,right=n2-1;
            while(left<=right)
            {
                int mid = left + (right-left)/2;
                if(num==arr2[mid])
                {
                    pair1.insert(pair<int, int>(i, mid));
                    break;
                }
                else if(num<arr2[mid])
                    right = mid-1;
                else
                    left = mid+1;
            }
        }
        if (pair1.empty())
        { 
            cout<<max(prefix1[n1-1],prefix2[n2-1])<<endl;
            continue;
        } 
        // for(auto itr=pair1.begin();itr!=pair1.end();++itr)
        // {
        //     cout<<itr->first<<" "<<itr->second<<endl;
        // }
        int sum = findsum(prefix1,prefix2,pair1,n1,n2);
        cout<<sum<<endl;
    }
    return 0;
}