class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> resultVec;
        for (int i = 0; i < numRows; i++) {
            vector<int> temp(i+1,1);
            for (int j = 1; j < i; j++) {
                temp[j] = resultVec[i-1][j-1] + resultVec[i-1][j];
            }
            resultVec.push_back(temp);
        }
        return resultVec;
    }
};