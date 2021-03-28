bool checkNum(string x){
    string maxi = "2147483647";
    if(x.length()>maxi.length())
        return true;
    if(x.length()<maxi.length())
        return false;
    for(int i = 0; i <x.length(); ++i){
        if ((x[i] - '0') > (maxi[i] - '0')){
            return true;
        }
    }
    return false;
}
int Solution::atoi(const string A) {
    string clean="";
    int sign=0;
    if(A[0]=='-')
        sign=-1;
    else if(A[0]=='+')
        sign=1;
    for(int i=0;i<A.length();i++){
        if(isdigit(A[i]))
            clean+=A[i];
        else if((i==0&&A[i]=='-')||(i==0&&A[i]=='+'))
            continue;
        else
            break;
    }
    if(clean=="")
        return 0;
    if(checkNum(clean))
        if(sign==-1)
            return INT_MIN;
        else
            return INT_MAX;
    int answer=0;
    for(int i=0;i<clean.length();i++)
        answer = 10*answer + (clean[i]-'0');
    if(sign==-1)
        answer *= -1;
    return answer;
}
