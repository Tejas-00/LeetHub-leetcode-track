class Solution {
public:
    
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> stk;
        vector<int> result(nums.size(), -1);
        for (int i = 2*nums.size() - 1; i >= 0; i--) {
            while (!stk.empty() && nums[i % nums.size()] >= stk.top()) {
                stk.pop();
            }
            if (!stk.empty()) {
                result[i % nums.size()] = stk.top();
            }
            stk.push(nums[i % nums.size()]);
        }
        return result;
    }
};