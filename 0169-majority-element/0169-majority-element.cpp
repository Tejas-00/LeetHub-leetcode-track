class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int index = 0;
        int count;
        while (count <= nums.size()/2) {
            count = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[index] == nums[i]) count++;
            }
            index++;
        }
        return nums[index-1];
    }
};