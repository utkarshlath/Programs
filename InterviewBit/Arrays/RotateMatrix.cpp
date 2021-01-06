void Solution::rotate(vector<vector<int> > &A) {
    int n = A[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    for(int i=0;i<n;i++)
        reverse(A[i].begin(),A[i].end());
}