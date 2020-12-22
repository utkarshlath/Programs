vector<int> Solution::rotateArray(vector<int> &A, int B) {
    vector<int> ret(A); 
    for (int i = 0; i < B; i++) {
        int temp=ret[0];
        ret.erase(ret.begin());
        ret.push_back(temp);
    }
    return ret; 
}