class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string commonStr = "";

        if (strs.empty()) {
            return commonStr;
        }

        int size = strs.size();
        string firstElem = strs[0];
        string lastElem = strs[size - 1];

        for (int i = 0; i < firstElem.size(); i++) {
            if (firstElem[i] == lastElem[i]) {
                commonStr += firstElem[i];
            } else {
                return commonStr;
            }
        }
        return commonStr;       
    }
};