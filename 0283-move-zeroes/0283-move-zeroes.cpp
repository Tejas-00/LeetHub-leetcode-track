class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0; // Pointer for tracking position of non-zero elements
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]); // Swap non-zero element with zero
                j++;
            }
        }
    }
};
