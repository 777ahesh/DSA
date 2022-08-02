//Solution

class Solution {
public:
    bool isPalindrome(int x) {
        int last_digit = 0;
        long long int sum = 0;
        long long int ans = x;
        while(x>0){
            last_digit = x%10;
            sum = sum*10 + last_digit;
            x=x/10;
        }
        if(sum == ans){
            return true;
        }
        return false;
    }
};