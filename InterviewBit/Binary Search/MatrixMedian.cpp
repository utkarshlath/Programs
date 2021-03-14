int Solution::findMedian(vector<vector<int> > &A) {
    int row = A.size(), col = A[0].size();
    int mini=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<row;i++){
        mini = min(mini,A[i][0]);
        maxi = max(maxi,A[i][col-1]);
    }
    int left=mini, right=maxi, req=(row*col)/2;
    while(1){
        int mid = left + (right-left)/2;
        int countless=0,countmore=0;
        for(int i=0;i<row;i++){
            countless+= lower_bound(A[i].begin(),A[i].end(),mid)-A[i].begin();
            countmore+= upper_bound(A[i].begin(),A[i].end(),mid)-A[i].begin();
        }
        countmore--;
        if(countless<=req&&countmore>=req)
            return mid;
        else if(countless>req)
            right=mid-1;
        else 
            left=mid+1;
    }
}
