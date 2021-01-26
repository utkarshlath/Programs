bool isPrime(int n) 
{ 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
    return true; 
}

vector<int> Solution::primesum(int A) {
    for(int i=2;i<=A/2;i++){
        if(isPrime(i)&&isPrime(A-i))
            return {i,A-i};
    }
}