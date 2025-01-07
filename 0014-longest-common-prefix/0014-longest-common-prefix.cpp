class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string commonStr = "";

        if (strs.empty()) {
            return commonStr;
        }

        sort(strs.begin(),strs.end());

        int size = strs.size();
        string firstElem = strs[0];
        string lastElem = strs[size - 1];

        for (int i = 0; i < firstElem.size(); i++) {
            if (firstElem[i] != lastElem[i]) {
                return commonStr;
            }
            commonStr += firstElem[i];
        }
        return commonStr;       
    }
};