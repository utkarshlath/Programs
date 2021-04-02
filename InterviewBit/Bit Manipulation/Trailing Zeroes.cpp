int Solution::solve(int A) {
    string x = "00000000000000000000000000000000";
    for(int pos = 31; pos >= 0; --pos)
    {
        if (A % 2) 
            x[pos] = '1';
        A /= 2;
    }
    int count=0;
    for(int pos=31;pos>=0;--pos)
        if(x[pos]=='0')
            count++;
        else
            break;
    return count;
}
