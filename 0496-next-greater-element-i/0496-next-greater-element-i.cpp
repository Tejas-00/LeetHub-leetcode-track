class Solution {
public:
    stack<int> stk;
    unordered_map<int, int> nextGreater;
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        for (int i = nums2.size() - 1; i >= 0; i--) {
            while ( !stk.empty() && stk.top() <= nums2[i]) {
                stk.pop();
            }
            if (stk.empty()) {
                nextGreater[nums2[i]] = -1;
            }
            else {
                nextGreater[nums2[i]] = stk.top();
            }
            stk.push(nums2[i]);
        }

        for (int j = 0; j < nums1.size(); j++) {
            nums1[j] = nextGreater[nums1[j]];
        }

        return nums1;
    }
};