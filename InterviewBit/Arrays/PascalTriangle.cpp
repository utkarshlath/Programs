vector<vector<int> > Solution::solve(int A) {
    if(A==1)
        return {{1}};
    vector<vector<int>> ans(A);
    for(int i=0;i<A;i++)
    {
        ans[i] = vector<int>(i+1);
        for(int j=0;j<i+1;j++)
        {
            if(j==0||j==i)
                ans[i][j]=1;
            else{
                ans[i][j] = ans[i-1][j]+ans[i-1][j-1];
            }
        }
    }
    return ans;
}