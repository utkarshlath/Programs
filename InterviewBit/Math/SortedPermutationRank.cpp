#define MOD 1000003

int factorial(int num){
    if(num<1)   
        return 0;
    int fact=1;
    for(int i=2;i<=num;i++)
    {
        fact*=i;
        fact%=MOD;
    }
    return fact%MOD;
}
int Solution::findRank(string A) {
    string base = A,check="";
    int idx=0,idx2=0,count=0;
    sort(base.begin(),base.end());
    while(check!=A){
        if(base[idx]==A[idx2])
        {
            check+=base[idx];
            base.erase(base.begin()+idx);
            idx=0;
            idx2++;
            continue;
        }
        int val = factorial(A.length()-check.length()-1);
        val%=MOD;
        count+=val;
        count%=MOD;
        idx++;
    }
    return (count+1)%MOD;
}