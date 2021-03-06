string Solution::convert(string A, int B) {
    if (B==1) return A;
    string ans="";
    for(int i=0;i<A.size();){
        ans+=A[i];
        i+= (B-1)*2;
    }
    for(int i=1;i<B-1;i++){
        int bottom=1;
        for(int j=i;j<A.length();){
            ans+=A[j];
            if(bottom%2==1){
                j+=(B-i-2)*2+2;;
                bottom++;
            }
            else{
                j+=(i-1)*2+2;
                bottom++;
            }
        }
    }
    for(int i=B-1;i<A.size();){
        ans+=A[i];
        i+= (B-1)*2;
    }
    return ans;
}