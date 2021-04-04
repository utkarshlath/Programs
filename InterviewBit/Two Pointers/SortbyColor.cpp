void Solution::sortColors(vector<int> &A) {
    vector<int> freq(3,0);
    int n=A.size();
    for(int i=0;i<n;i++){
        freq[A[i]]++;
    }
    int j=0;
    for(int i=0;i<freq[0];i++)
        A[j++]=0;
    for(int i=0;i<freq[1];i++)
        A[j++]=1;
    for(int i=0;i<freq[2];i++)
        A[j++]=2;
}
