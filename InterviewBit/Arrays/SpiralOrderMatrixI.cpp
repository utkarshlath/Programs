vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int top=0,bottom=A.size()-1,left=0,right=A[0].size()-1;
    int dir=0;
    vector<int> ans;
    while(top<=bottom&&left<=right)
    {
        if(dir==0)
        {
            for(int i=left;i<=right;i++)
                ans.push_back(A[top][i]);
            top++;
            dir=1;
        }
        if(dir==1)
        {
            for(int i=top;i<=bottom;i++)
                ans.push_back(A[i][right]);
            right--;
            dir=2;
        }
        if(dir==2)
        {
            for(int i=right;i>=left;i--)
                ans.push_back(A[bottom][i]);
            bottom--;
            dir=3;
        }
        if(dir==3)
        {
            for(int i=bottom;i>=top;i--)
                ans.push_back(A[i][left]);
            left++;
            dir=0;
        }
    }
    return ans;
}