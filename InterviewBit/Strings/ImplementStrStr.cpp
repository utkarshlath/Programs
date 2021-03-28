int Solution::strStr(const string A, const string B) {
    int n1=A.length(),n2=B.length();
    if(!n1||!n2)
        return -1;
    if(A==B){
        return 0;
    }
    if(n2>=n1){
        return -1;
    }
        
    for(int i=0;i<n1;i++){
        if(A[i]==B[0]){
            int flag=0;
            if(n1-i>=n2){
                int k;
                for(k=0;k<n2;k++){
                    if(B[k]!=A[i+k]){
                        flag=1;
                        break;
                    }
                }
                if(!flag)
                    return i;
            }
        }
    }
    return -1;
}
