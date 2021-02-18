bool isPalindrome(string A,int left, int right)
{
    while(left<right)
    {
        if(A[left]!=A[right])
            return false;
        left++;
        right--;
    }
    return true;
}
int Solution::solve(string A) {
    
    int left=0,right=A.size()-1;
    while(left<=right)
    {
        if(A[left]!=A[right])
            return isPalindrome(A,left+1,right)||isPalindrome(A,left,right-1);
        left++;
        right--;
    }
    return true;
}