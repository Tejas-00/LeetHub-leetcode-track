class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxCount = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ')') {
                count--;
            }
            else if (s[i] == '(') {
                count++;
                maxCount = max(count, maxCount);
            }
        }    
        return maxCount;
    }
};