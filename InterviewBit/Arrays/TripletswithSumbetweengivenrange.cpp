int Solution::solve(vector<string> &A) {
    
    if(A.size()<3) 
        return 0;
    float a = stof(A[0]);
    float b=stof(A[1]);
    float c=stof(A[2]);
    float sum;

    for(int i=3;i<A.size();i++)
    {
        sum=a+b+c;
        if(sum>1 && sum<2) return 1;
        float temp= stof(A[i]);
        if(a+b+c>=2){
            if(a>b && a>c)
                a = temp;
            else if(b>c && b>a)
                b = temp;
            else
                c = temp;
        }
        else{
            if(a<b && a<c)
                a = temp;
            else if(b<c && b<a)
                b = temp;
            else
                c = temp;
        }
    }
    if(a+b+c>1 && a+b+c<2) 
        return 1;
    return 0;
}