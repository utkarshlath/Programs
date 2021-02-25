string Solution::longestCommonPrefix(vector<string> &A) {
    string ans = "";
    if(A.size()==0)
        return ans;
    if(A.size()==1)
        return A[0];
    string check = A[0];
    for(int i=0;i<check.size();i++){
        int flag=0;
        for(int j=1;j<A.size();j++){
            if(check[i]!=A[j][i])
                flag=1;
        }
        if(flag)
            break;
        else
            ans+=check[i];
    }
    return ans;
}