class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        sort(nums.begin(), nums.end());
        int count = 1; 
        int tempCount = 1;
        
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i+1] == nums[i] + 1) {
                tempCount++;
            } else if (nums[i+1] != nums[i]) {
                count = max(count, tempCount);
                tempCount = 1;
            }
        }
        
        return max(count, tempCount);
    }
};
