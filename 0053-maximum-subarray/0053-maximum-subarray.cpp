class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int tempSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            tempSum = max(nums[i], tempSum + nums[i]);
            sum = max(sum, tempSum);
        }
        return sum;
    }
};
