class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxIndex = 0;
        for (int i = 0; i < nums.size(); i++) {
            int currIndex = nums[i] + i;
            if (i > maxIndex) return false;
            else maxIndex = max(maxIndex,currIndex);
        }
        return true;
    }
};

//referred take U forward youtube video