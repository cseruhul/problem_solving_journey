#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int minOperations(vector<string> &logs) {
        // int min_Operation = 0;
        stack<string> log_stack;
        for (auto item : logs) {
            if ((item == "../")) {
                if (!log_stack.empty())
                    log_stack.pop();
            } else if (item == "./") {
            } else {
                log_stack.push(item);
            }
        }
        // display(log_stack);
        return log_stack.size();
    }
    // void display(stack<string> a) {
    //     while (!a.empty()) {
    //         cout << a.top() << " ";
    //         a.pop();
    //     }
    // }
};
int main() {
    // vector<string> logs{"d1/", "d2/", "../", "d21/", "./"};
    // vector<string> logs{"d1/", "d2/", "./", "d3/", "../", "d31/"};
    // vector<string> logs{"d1/", "../", "../", "../"};
    vector<string> logs{"./", "../", "./"};
    Solution obj;

    cout << obj.minOperations(logs) << endl;

    return 0;
}