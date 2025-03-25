class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> countMap;

        for (auto i : s) {
            countMap[i]++;
        } for (auto i : t) {
            countMap[i]--;
        }

        for (auto i : countMap) {
            if (i.second != 0) return false;
        } return true;
    }
};

// Mine Brute force \U0001f636‍\U0001f32b️
// bool isAnagram(string s, string t) {
//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());
//     if (s == t) return true;
//     return false;
// }

// unordered_map<char, int> count;
        
//         // Count the frequency of characters in string s
//         for (auto x : s) {
//             count[x]++;
//         }
        
//         // Decrement the frequency of characters in string t
//         for (auto x : t) {
//             count[x]--;
//         }
        
//         // Check if any character has non-zero frequency
//         for (auto x : count) {
//             if (x.second != 0) {
//                 return false;
//             }
//         }
        
//         return true;