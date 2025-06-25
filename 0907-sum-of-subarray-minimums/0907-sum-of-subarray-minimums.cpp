class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int mod = 1e9 + 7;
        vector<int> prev(n), next(n);
        stack<int> stk;

        for (int i = 0; i < n; ++i) {
            while (!stk.empty() && arr[stk.top()] > arr[i]) {
                stk.pop();
            }
            prev[i] = stk.empty() ? -1 : stk.top();
            stk.push(i);
        }

        while (!stk.empty()) stk.pop();

        for (int i = n - 1; i >= 0; --i) {
            while (!stk.empty() && arr[stk.top()] >= arr[i]) {
                stk.pop();
            }
            next[i] = stk.empty() ? n : stk.top();
            stk.push(i);
        }

        long long total = 0;
        for (int i = 0; i < n; ++i) {
            long long left = i - prev[i];
            long long right = next[i] - i;
            total = (total + (arr[i] * left % mod) * right % mod) % mod;
        }

        return total;
    }
};
