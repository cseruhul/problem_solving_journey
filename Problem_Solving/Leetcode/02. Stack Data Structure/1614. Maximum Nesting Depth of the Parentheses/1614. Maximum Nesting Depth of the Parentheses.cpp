#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxDepth(string s) {
        int max_depth = 0;
        stack<char> parentheses_stack;
        for (const char a : s) {
            // cout << parentheses_stack.size() << endl;
            if (a == '(') {
                parentheses_stack.push(a);
            } else if (a == ')') {
                int a = parentheses_stack.size();
                if (a > max_depth) max_depth = a;
                parentheses_stack.pop();
            }
        }
        return max_depth;
    }
};

int main() {
    Solution obj;
    ifstream input;
    input.open("input.txt");
    while (input.eof() == 0) {
        string s;
        input >> s;
        cout << obj.maxDepth(s) << endl;
    }
    input.close();

    return 0;
}