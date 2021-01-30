int Solution::titleToNumber(string A) {
    int row = 0;
    for(int i=0;i<A.length();i++)
    {
        row = row*26 + int(A[i])-64;
    }
    return row;
}