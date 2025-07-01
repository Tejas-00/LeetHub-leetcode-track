class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.size() == k) return "0";
        
        stack<char> stk;

        // removing the first k large digits
        for (int i = 0; i < num.size(); i++) {
            while (!stk.empty() && k > 0 && stk.top() > num[i]) {
                stk.pop();
                k--;
            }
            stk.push(num[i]);
        }

        // If still need to remove digits, remove from the end (top of stack)
        while (k > 0 && !stk.empty()) {
            stk.pop();
            k--;
        }
        
        // putting the characters in the stack into a string 
        string result;
        while (!stk.empty()) {
            // result = stk.top()+result; this line is inefficient in c++ cause MLE 
            result.push_back(stk.top());  // efficient O(1) operation
            stk.pop();
        }        
        reverse(result.begin(), result.end());  // only once

        // removing intial zeros
        while (result.size() > 1 && result[0] == '0') {
            result.erase(0, 1);
        }

        return result;
    }
};