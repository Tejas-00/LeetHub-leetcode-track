class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stack;
        for (int i = 0; i < asteroids.size(); i++) {
            bool placeInStack = true;
            while (!stack.empty() && asteroids[i] < 0 && stack.top() > 0) {
                if (abs(asteroids[i]) > stack.top()) stack.pop();
                else if (abs(asteroids[i]) < stack.top()) {
                    placeInStack = false;
                    break;
                } else {
                    stack.pop();
                    placeInStack = false;
                    break;
                }
            }

            if (placeInStack) stack.push(asteroids[i]);
        }
        
        vector<int> result(stack.size());
        int x = stack.size() - 1;
        while (!stack.empty()) {
            result[x] = stack.top();
            x--;
            stack.pop();
        }
        return result;
    }
};