class Solution {
public:
    void rec(int n , int open , int close , vector<string>& ans , string temp){
        if(open == close && open == n){
            ans.push_back(temp);
            return;
        }
        if(open < n){
            rec(n , open+1 , close , ans , temp + '(');
        }
        if(close < open){
            rec(n , open , close +1 , ans , temp + ')');
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        rec(n , 0 , 0,  ans , "");
        return ans;
    }
};