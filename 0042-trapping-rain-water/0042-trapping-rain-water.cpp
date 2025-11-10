class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        int n = height.size();
        int left = 0, leftMax = 0;
        int right = n-1, rightMax = n-1;

        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left+1] > height[leftMax]) {
                    leftMax = left+1;
                } else {
                    water += height[leftMax] - height[left+1];
                }
                left++;
            } else {
                if (height[right-1] > height[rightMax]) {
                    rightMax = right-1;
                } else {
                    water += height[rightMax] - height[right-1];
                }
                right--;
            }
        }
        return water;
    }
};