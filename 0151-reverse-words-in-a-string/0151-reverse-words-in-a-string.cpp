class Solution {
public:
    string reverseWords(string s) {
        string result;
        int j = s.size();
        
        for (int i = s.size()-1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (i == j - 1) {
                    j--;
                    continue;
                }
                result += s.substr(i+1,j-i-1) + " ";
                j = i;
            }
        }
        result += s.substr(0,j);

        while (result.back() == ' ') {
            result.pop_back();
        }

        return result;
    }
};