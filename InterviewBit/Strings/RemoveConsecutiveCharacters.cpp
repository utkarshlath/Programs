string Solution::solve(string A, int B) {
    for(int i=0;i<A.length();i++)
    {
        int flag=0;
        for(int j=i;j<i+B;j++)
            if(A[j]!=A[i])
            {
                flag=1;
                break;
            }
        if(flag==0){
            A.erase(i,B);
            i=i-B+1;
            if(i<-1)
                i=-1;
        }
    }
    return A;
}