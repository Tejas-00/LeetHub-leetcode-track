class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mpp;
        string result = "";

        for (auto i : s) mpp[i]++;

        multimap<int, char, greater<int>> sortedMap;
        for (auto it : mpp) {
            sortedMap.insert({it.second, it.first});
        }

        for (auto it : sortedMap) {
            for (int i = 0; i < it.first; i++) {
                result += it.second;
            }
        }
        return result; 
    }
};