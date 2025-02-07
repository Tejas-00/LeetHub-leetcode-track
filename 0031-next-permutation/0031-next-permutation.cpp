class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), i = n - 2;

        // Step 1: Find the first decreasing element from the right
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        if (i >= 0) { // If such an element is found
            int j = n - 1;
            // Step 2: Find the next larger element to swap with nums[i]
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }

        // Step 3: Reverse the right part to get the next permutation
        reverse(nums.begin() + i + 1, nums.end());
    }
};
