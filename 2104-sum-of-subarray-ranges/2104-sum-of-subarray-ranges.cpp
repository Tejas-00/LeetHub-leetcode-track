class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int> prevGreater(n, -1), nextGreater(n, n);
        vector<int> prevSmaller(n, -1), nextSmaller(n, n);
        stack<int> stk;

        //prevSmaller
        for (int i = 0; i < n; i++) {
            while (!stk.empty() && nums[stk.top()] >= nums[i]) stk.pop();
            if (!stk.empty()) prevSmaller[i] = stk.top();
            stk.push(i);
        }
        while (!stk.empty()) stk.pop();

        //nextSmaller
        for (int i = n-1; i >= 0; i--) {
            while (!stk.empty() && nums[stk.top()] > nums[i]) stk.pop();
            if (!stk.empty()) nextSmaller[i] = stk.top();
            stk.push(i);
        }
        while (!stk.empty()) stk.pop();

        //prevGreater
        for (int i = 0; i < n; i++) {
            while (!stk.empty() && nums[stk.top()] <= nums[i]) stk.pop();
            if (!stk.empty()) prevGreater[i] = stk.top();
            stk.push(i);
        }
        while (!stk.empty()) stk.pop();

        //nextGreater
        for (int i = n-1; i >= 0; i--) {
            while (!stk.empty() && nums[stk.top()] < nums[i]) stk.pop();
            if (!stk.empty()) nextGreater[i] = stk.top();
            stk.push(i);
        }

        long long res = 0;
        for(int i=0;i<n;i++)
        {
            long long maxcount= (long long)(i-prevGreater[i])*(nextGreater[i]-i);
            long long mincount= (long long)(i-prevSmaller[i])*(nextSmaller[i]-i);
            res+=(maxcount-mincount)*nums[i];
        }

        return res;
    }
};