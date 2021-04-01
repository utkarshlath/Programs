unsigned int Solution::reverse(unsigned int A) {
    string s  = "00000000000000000000000000000000";
    for (int pos = 31; pos >= 0; --pos)
    {
        if (A % 2) 
            s[pos] = '1';
        A /= 2;
    }
    unsigned int x=0;
    for(int pos=31; pos>=0; --pos)
    {
        if(s[pos]=='1')
            x += pow(2,pos);
    }
    return x;
}
