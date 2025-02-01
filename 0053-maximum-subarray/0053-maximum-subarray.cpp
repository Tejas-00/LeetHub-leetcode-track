class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];  // Initialize sum to the first element
        int tempSum = nums[0];  // Initialize tempSum to the first element

        for (int i = 1; i < nums.size(); i++) {
            // Decide whether to add current element to tempSum or start a new subarray
            tempSum = max(nums[i], tempSum + nums[i]);
            // Update the overall sum with the maximum sum found so far
            sum = max(sum, tempSum);
        }
        return sum;
    }
};
