#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped) {
        int i = 0;
        stack<int> values;
        for (auto item : pushed) {
            values.push(item);
            while (i < popped.size() && !values.empty() && values.top() == popped[i]) {
                values.pop();
                i++;
            }
        }
        return values.empty();
    }
};

int main() {
    vector<int> pushed{1, 0};
    vector<int> popped{1, 0};

    Solution obj;

    cout << (obj.validateStackSequences(pushed, popped) ? "true" : "false") << endl;

    return 0;
}
