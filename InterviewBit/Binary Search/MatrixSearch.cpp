int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int rowtop = 0, rowbottom = A.size()-1,foundrow;
    int col = A[0].size();
    while(rowtop<=rowbottom){
        int rowmid = (rowtop+rowbottom)/2;
        if(A[rowmid][0]<=B&&A[rowmid][col-1]>=B){
            foundrow = rowmid;
            break;
        }
        else if(A[rowmid][0]>B){
            rowbottom = rowmid-1;
        }
        else if(A[rowmid][col-1]<B){
            rowtop = rowmid+1;
        }
    }
    int l=0, r=col-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(A[foundrow][mid]==B)
            return 1;
        else if(A[foundrow][mid]>B){
            r=mid-1;
        }
        else if(A[foundrow][mid]<B){
            l=mid+1;
        }
    }
    return 0;
}
