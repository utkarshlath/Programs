#include<bits/stdc++.h> 
bool isValid(vector<int>A,int n, int B, int mid){
    int student=1,sum=0;
    for(int i=0;i<n;i++){
        if(A[i]>mid)
            return false;
        if(sum+A[i]>mid){
            student++;
            sum=A[i];
            if(student>B)
                return false;
        }
        else
            sum+=A[i];
    }
    return true;
}
int Solution::books(vector<int> &A, int B) {
    int n = A.size();
    if(n<B)
        return -1;
    int low=0, high=accumulate(A.begin(),A.end(),0),result=INT_MAX;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(isValid(A,n,B,mid)){
            result = min(result, mid);
            high=mid-1;
        }
        else
            low=mid+1;
    }
    return result;
}
