class Solution {
public:
    bool isIsomorphic(string s, string t) {
        for (int i = 0; i < s.size(); i++) {
            for (int j = i+1; j < s.size(); j++) {
                if (s[i] == s[j]) {
                    if (t[i] != t[j]) return false;
                } if (t[i] == t[j]) {
                    if (s[i] != s[j]) return false;
                }
            }
        }
        return true;
    }
};
