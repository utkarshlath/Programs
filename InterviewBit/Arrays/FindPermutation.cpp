vector<int> Solution::findPerm(const string A, int B) {
    vector<int> ans(B);
    int start = 1, end= B;
    
    for(int i=0;i<A.length();i++)
    {
        if(A.at(i)=='I')
            ans[i]=start++;
        else
            ans[i]=end--;
    }
    
    if(A.at(B-2)=='I')
        ans[B-1]=start++;
    else
        ans[B-1]=end--;
        
    return ans;
}