class Solution {
public:
    bool isPalindrome(int x) {
        int org = x;
        if (x < 0) return false;
        int revNum = 0;
        while (x != 0) {
            if ((revNum > INT_MAX / 10) || (revNum < INT_MIN / 10)) return false;
            revNum = revNum * 10 + (x % 10);
            x /= 10;
        }
        return (revNum == org);
    }
};