class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        int ind = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < mp[i]; j++){
                nums[ind] = i;
                ind++;
            }
        }
    }
};

/*
Best approach: Dutch National Flag Algorithm
I've used count sort technique
better alternate for count sort
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Step 1: Count occurrences of 0, 1, and 2
        int count[3] = {0, 0, 0};
        for (int num : nums) {
            count[num]++;
        }

        // Step 2: Overwrite the array using the counts
        int index = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < count[i]; j++) {
                nums[index++] = i;
            }
        }
    }
};
*/