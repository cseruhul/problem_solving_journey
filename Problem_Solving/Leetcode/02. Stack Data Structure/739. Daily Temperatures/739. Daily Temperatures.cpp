#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> dailyTemperatures(vector<int> &temperatures) {
        vector<int> answer{};
        stack<int> temp_stack;
        int n = temperatures.size();
        for (int i = n - 1; i >= 0; i--) {
            while ((!temp_stack.empty()) && (temperatures[temp_stack.top()] <= temperatures[i])) {
                temp_stack.pop();
            }

            int days = (temp_stack.empty()) ? 0 : temp_stack.top() - i;
            temp_stack.push(i);
            answer.push_back(days);
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};

int main() {
    vector<int> temperature{30, 60, 90};
    // vector<int> temperature{73, 74, 75, 71, 69, 72, 76, 73};
    // vector<int> temperature{30, 40, 50, 60};
    vector<int> answer;
    Solution obj;
    answer = obj.dailyTemperatures(temperature);

    for (auto item : answer)
        cout << item << " ";
    return 0;
}