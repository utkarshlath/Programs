int Solution::numSetBits(unsigned int A) {
    int count=0;
    while(A)  
    {    
        count += A%2;    
        A=A/2;  
    }
    return count;
}
