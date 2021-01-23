int Solution::maximumGap(const vector<int> &A) {
    vector<pair<int,int>> vec;
    for(int i=0;i<A.size();i++)
        vec.push_back({A[i],i});
    sort(vec.begin(),vec.end());
    int mini=INT_MAX,ans=0;
    for(int i=0;i<A.size();i++)
    {
        if(vec[i].second<mini)
            mini=vec[i].second;
        else if(vec[i].second-mini>ans)
            ans=vec[i].second-mini;
    }
    return ans;
}