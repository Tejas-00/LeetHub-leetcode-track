class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            res ^= nums[i];
        }
        return res;
    }
};

// first solution:
// int singleNumber(vector<int>& nums) {
//     for (int i = 0; i < nums.size(); i++) {
//         int flag = 0;
//         for (int j = 0; j < nums.size(); j++) {
//             if (i == j) continue;
//             if (nums[j] == nums[i]) {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0) {
//             return nums[i];
//         }
//     }
//     return 0;
// }

// runtime: 685ms \U0001f605