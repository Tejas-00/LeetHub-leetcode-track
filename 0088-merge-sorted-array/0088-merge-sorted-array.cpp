class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;
        int indexM = 0;
        int indexN = 0;
        while (indexM < m && indexN < n) {
            if (nums2[indexN] < nums1[indexM]) {
                result.push_back(nums2[indexN]);
                indexN++;
            } else {
                result.push_back(nums1[indexM]);
                indexM++;
            }
        }
        while (indexN < n) {
            result.push_back(nums2[indexN]);
            indexN++;
        }
        while (indexM < m) {
            result.push_back(nums1[indexM]);
            indexM++;
        }
        // if (nums2.empty()) result = nums1;
        nums1 = result;
    }
};