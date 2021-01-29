int Solution::reverse(int A) {
    int flag=0;
    if(A<0)
    {
        flag=1;
        A*=-1;
    }
    int ans=0;
    long long int ans1 = 0;
    while(A)
    {
        ans = ans*10 + (A%10);
        ans1 = ans1*10 + (A%10);
        A/=10;
    }
    if(flag)
    {   
        ans*=-1;
        ans1*=-1;
    }
    if(ans!=ans1)
        return 0;
    return ans;
}