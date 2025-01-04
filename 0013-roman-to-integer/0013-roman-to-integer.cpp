class Solution {
public:
    int checkNum(char romanNum) {
        if (romanNum == 'I') {
            return 1;
        } else if (romanNum == 'V') {
            return 5;
        } else if (romanNum == 'X') {
            return 10;
        } else if (romanNum == 'L') {
            return 50;
        } else if (romanNum == 'C') {
            return 100;
        } else if (romanNum == 'D') {
            return 500;
        } else if (romanNum == 'M') {
            return 1000;
        }
        return 0;
    }
    int integer = 0;
    int prevInt;
    int currInt;
    int romanToInt(string s) {
        for (int i = 0; i < s.size(); i++) {
            currInt = checkNum(s[i]);
            if (i != 0 && prevInt < currInt) {
                integer = integer - prevInt + (currInt - prevInt);
            } else {   
                integer += currInt;
            }
            prevInt = s[i];
        }
        return integer;
    }
};