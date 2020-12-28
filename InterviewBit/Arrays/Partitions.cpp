int Solution::solve(int B, vector<int> &A) {
    vector<int> prefix(B);
    int count=0, ans=0;
    prefix[0]=A[0];
    for(int i=1;i<B;i++)
        prefix[i] = prefix[i-1]+A[i];
    int sum = prefix[B-1];
    if(sum%3!=0)
        return 0;
        
   int sum2by3 = 2*(sum/3);
   int sum1by3 = sum/3;
   
    for (int i=0; i<B-1; i++) 
    { 
        if (prefix[i] == sum2by3) 
        { 
            ans+=count;
        }
        if(prefix[i]==sum1by3)
            count+=1;
    }
    return ans; 
}