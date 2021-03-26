string Solution::countAndSay(int A) {
    string curr="1";
    for(int i=2;i<=A;i++){
        int freq=0,ele;
        string newcurr;
        for(int j=0;j<curr.length();j++){
            if(j==0){
                ele = curr[0]-'0';
                freq=1;
                continue;
            }
            
            if((curr[j]-'0')==ele)
                freq++;
            if((curr[j]-'0')!=ele){
                newcurr+= (freq+'0');
                newcurr+= (ele+'0');
                ele = curr[j]-'0';
                freq=1;
            }
        }
        newcurr+= (freq+'0');
        newcurr+= (ele+'0');
        curr = newcurr;
    }
    return curr;
}
