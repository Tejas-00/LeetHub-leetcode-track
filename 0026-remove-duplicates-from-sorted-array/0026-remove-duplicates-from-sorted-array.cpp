class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> result;
        result.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            if (result[result.size()-1] != nums[i]) {
                result.push_back(nums[i]);
            }
        }
        nums = result;
        return result.size();
    }
};

// best solution
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int j = 1;
//         for(int i = 1; i < nums.size(); i++){
//             if(nums[i] != nums[i - 1]){
//                 nums[j] = nums[i];
//                 j++;
//             }
//         }
//         return j;
//     }
// };