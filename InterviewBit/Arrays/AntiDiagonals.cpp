vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n = A.size();
    vector<vector<int> >ans(2*n-1);
    for(int i=0;i<=2*(n-1);i++)
    {
        if(i<n)
            ans[i]=vector<int>(i+1);
        else
            ans[i]=vector<int>(2*n-1-i);
        int ymin = max(0,i-n+1);
        int ymax = min(n-1,i);
        for(int j=ymin;j<=ymax;j++)
        {
            int x = i-j;
            if(i<n)
                ans[i][j]=A[j][x];
            else
                ans[i][j-(i-n+1)]=A[j][x];
        }
    }
    return ans;
}