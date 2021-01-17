int Solution::solve(vector<vector<int>> &vec, int B) 
{
    int m = vec.size(), n = vec[0].size();
    for(int i = 0; i < m; i++)
    {
        for(int j = 1; j < n; j++)
        {
            vec[i][j] += vec[i][j-1];
        }
    }
    
    for(int j = 0; j < n; j++)
    {
        for(int i = 1; i < m; i++)
        {
            vec[i][j] += vec[i-1][j];
        }
    }
    
    int res = INT_MIN;
    for(int i = B-1; i < n; i++)
    {
        for(int j = B-1; j < m; j++)
        {
            int s = vec[i][j];
            
            if(i-B >= 0) s -= vec[i-B][j];
            if(j-B >= 0) s -= vec[i][j-B];
            
            if(j-B >= 0 && i-B >= 0) s += vec[i-B][j-B];
            
            res = max(res, s);
        }
    }
    
    return res;
}