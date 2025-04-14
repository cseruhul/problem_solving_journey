#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int calPoints(vector<string> &operations) {
        int ans = 0, number1 = 0, number2 = 0;
        stack<int> result;

        for (auto item : operations) {
            if (item == "+") {
                if (result.size() >= 2) {
                    number1 = result.top();
                    result.pop();
                    number2 = result.top();
                    result.push(number1);
                    result.push(number1 + number2);
                }
            } else if (item == "D") {
                number1 = result.top() * 2;
                result.push(number1);
            } else if (item == "C") {
                result.pop();
            } else {
                result.push(stoi(item));
            }
        }
        // cout << result.empty() << endl;
        while (!result.empty()) {
            // cout << result.top() << " ";
            ans += result.top();
            result.pop();
        }
        return ans;
    }
};
int main() {
    // vector<string> operations{"5", "2", "C", "D", "+"};
    // vector<string> operations{"5", "-2", "4", "C", "D", "9", "+", "+"};
    // vector<string> operations{"1", "C"};
    vector<string> operations{"36", "28", "70", "65", "C", "+", "33", "-46", "84", "C"};
    Solution obj;
    cout << obj.calPoints(operations) << endl;
    return 0;
}