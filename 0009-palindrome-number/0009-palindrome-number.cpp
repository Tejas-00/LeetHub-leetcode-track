class Solution {
public:
    bool isPalindrome(int x) {
        string strX = to_string(x);
        for (int i = 0; i < strX.size() / 2; i++) {
            if (strX[i] != strX[strX.size()-1-i]) return false;
        }
        return true;
    }
};