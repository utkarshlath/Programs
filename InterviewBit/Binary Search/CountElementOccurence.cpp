int firstOccurence(const vector<int> &A, int B, bool searchFirst){
    int low=0, high=A.size()-1,result=-1;
    
    while(low<=high){
        int mid = (high+low)/2;
        if(A[mid]==B){
            result = mid;
            if(searchFirst)
                high = mid-1;
            else
                low = mid+1;
        }
        else if(A[mid]>B)
            high = mid-1;
        else
            low = mid+1;
    }
    return result;
}

int Solution::findCount(const vector<int> &A, int B) {
    int first = firstOccurence(A,B,true);
    int last = firstOccurence(A,B,false);
    if(first!=-1||last!=-1)
        return last-first+1;
    return 0;
}