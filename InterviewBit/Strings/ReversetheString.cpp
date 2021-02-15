string Solution::solve(string A) {
    string ans="";
    for(int i=0;i<A.length();i++)
    {
        if(A[i]==' ')
            continue;
        int j=i;
        string word="";
        while(A[j]!=' '&&j<A.length())
        {
            word+=A[j];
            j++;
        }
        ans=word+" "+ans;
        i=j;
    }
    ans.erase(ans.length()-1);
    return ans;
}