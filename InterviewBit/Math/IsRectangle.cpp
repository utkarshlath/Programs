int Solution::solve(int A, int B, int C, int D) {
    vector<int> ans;
    ans.push_back(B);
    ans.push_back(C);
    ans.push_back(D);
    auto it = find(ans.begin(), ans.end(),A);
    if(it==ans.end())
        return 0;
    else
        ans.erase(it);
    if(ans[0]==ans[1])
        return 1;
    else 
        return 0;
}