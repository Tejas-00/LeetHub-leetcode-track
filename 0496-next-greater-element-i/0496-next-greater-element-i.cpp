class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        for (int i = 0; i < nums1.size(); i++) {
            int ind;
            int flag = 0;
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    ind = j;
                    break;
                }
            }
            if (ind == nums2.size()-1) {
                nums1[i] = -1;
                continue;
            }
            for (int k = ind+1; k < nums2.size(); k++) {
                if (nums2[k] > nums2[ind]) {
                    nums1[i] = nums2[k];
                    flag = 1;
                    break;
                }
            }
            if (!flag) nums1[i] = -1;
        }
        return nums1;
    }
};