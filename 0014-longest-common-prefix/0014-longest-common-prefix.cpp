class Solution {
public:
    string commonPref = "";
    string checkCommon(string str1, string str2) {
        for (int i = 0; i < str2.size(); i++) {
            if (str1[i] == str2[i]) {
                commonPref = str1.substr(0,i+1);
            } else {
                commonPref = str1.substr(0,i);
                break;
            }
        }
        return commonPref;
    }
    string longestCommonPrefix(vector<string>& strs) {
        // if (strs.size() == 1) return strs[0];
        // for (int i = 1; i < strs.size(); i++) {
        //     if (i == 1) {
        //         checkCommon(strs[0], strs[1]);
        //     } else {
        //         checkCommon(strs[i], commonPref);
        //     }
        // }
        // return commonPref;
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