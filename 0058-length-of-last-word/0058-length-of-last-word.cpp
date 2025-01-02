
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0, flag = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ' && flag == 1) {
                break;
            } if (s[i] != ' ') {
                flag = 1;
                len++;
            }
        }
        return len;
    }
};