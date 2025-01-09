class Solution {
public:
    string commonPref = "";
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string firstStr = strs[0];
        string lastStr = strs[strs.size()-1];
        for (int i = 0; i < firstStr.size(); i++) {
            if (firstStr[i] == lastStr[i]) {
                commonPref = firstStr.substr(0, i+1);
            } else {
                break;
            }
        }
        return commonPref;
    }
};

// other solutions don't seem so good and understandable