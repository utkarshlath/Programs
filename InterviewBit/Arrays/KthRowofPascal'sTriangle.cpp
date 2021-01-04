vector<int> Solution::getRow(int A) {
    vector <int> ans;
    int prev = 1;
    for(int i=1; i<=(A+1); i++)
    {
     ans.push_back(prev);
      prev = (prev * (A+1-i))/i;
    }
    return ans;
}