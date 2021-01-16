void Solution::setZeroes(vector<vector<int> > &A) {
    vector<int> rows(A.size(),1);
    vector<int> columns(A[0].size(),1);
    
    for(int i=0;i<A.size();i++)
        for(int j=0;j<A[0].size();j++)
            if(A[i][j]==0)
            {
                rows[i]=0;
                columns[j]=0;
            }
            
    for(int i=0;i<A.size();i++)
        if(rows[i]==0)
            for(int j=0;j<A[0].size();j++)
                A[i][j]=0;
                
    for(int j=0;j<A[0].size();j++)
        if(columns[j]==0)
            for(int i=0;i<A.size();i++)
                A[i][j]=0;
}