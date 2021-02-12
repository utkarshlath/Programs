int Solution::solve(vector<int> &A, int B, int C) {
    int count=0,temp=C,ans;
    if(A.size()==0)
        return 0;
    while(temp)
    {
        count+=1;
        temp/=10;
    }
    if(B>count)
        return 0;
    else if(B<count)
    {
        if(A[0]!=0)
            ans = pow(A.size(),B);
        else
            ans = pow(A.size(),B-1)*(A.size()-1);
        if(B==1&&A[0]==0)
            ans++;
        return ans;
    }
    else
    {
        if(B==1)
        {
            for(int i=0;i<A.size();i++)
                if(A[i]<C)
                    ans++;
        }
        else
        { 
            vector<int> temp(B);
            for(int i=B-1;i>=0;i--)
            {
                temp[i]=C%10;
                C/=10;
            }
            int count1=0;
            for(int i=0;i<A.size();i++)
            {
                if(A[i]==0)
                    continue;
                if(A[i]>temp[0])
                    break;
                count1++;
            }
            ans = count1*pow(A.size(),B-1);
            int flag=0,j=0;
            for(int i=0;i<A.size();i++)
            {
                if(A[i]==temp[j])
                    flag=1;
            }
            j++;
            while(flag==1&&j<=B-1)
            {
                int extra=0;
                flag=0;
                for(int i=0;i<A.size();i++)
                {
                    if(A[i]>temp[j])
                        extra++;
                    if(A[i]==temp[j])
                        flag=1;
                }
                ans-=(extra*pow(A.size(),B-j-1));
                j++;
            }
            if(j==B&&flag==1)
                ans--;
        }
        return ans;
    }
}