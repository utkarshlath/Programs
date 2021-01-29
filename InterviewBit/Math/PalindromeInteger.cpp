int Solution::isPalindrome(int A) {
    string check = to_string(A);
    reverse(check.begin(),check.end());
    if(check==to_string(A))
        return 1;
    else
        return 0;
}