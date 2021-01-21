int Solution::solve(vector<int> &A) {
    int odd=0,even=0;
    for(int i=0;i<A.size();i++)
    {
        if(i%2==0)
            odd+=A[i];
        else
            even+=A[i];
    }
    int x=0,y=0,count=0;
    for(int i=0;i<A.size();i++)
    {
        if(i%2==0)
            odd-=A[i];
        else
            even-=A[i];
            
        if(odd+x==even+y)
            count+=1;
            
        if(i%2==0)
            y+=A[i];
        else
            x+=A[i];
    }
    return count;
}