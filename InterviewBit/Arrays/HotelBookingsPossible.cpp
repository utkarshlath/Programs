bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    int n = arrive.size();
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    for(int i=K;i<n;i++)
    {
        if(arrive[i]<depart[i-K])
            return false;
    }
    return true;
}