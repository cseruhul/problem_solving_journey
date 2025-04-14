#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isValid(string s) {
        unordered_map<char, char> map_parentheses;
        map_parentheses[')'] = '(';
        map_parentheses['}'] = '{';
        map_parentheses[']'] = '[';
        stack<char> stack_parentheses;
        char parentheses;
        int n;
        n = s.length();
        for (int i = 0; i < n; i++) {
            if (map_parentheses.find(s[i]) != map_parentheses.end()) {
                if (!stack_parentheses.empty() && stack_parentheses.top() == map_parentheses[s[i]]) {
                    stack_parentheses.pop();
                } else {
                    return false;
                }
            } else {
                stack_parentheses.push(s[i]);
            }
        }

        return (stack_parentheses.empty()) ? true : false;
    }
};

int main() {
    string s;
    ifstream input;
    input.open("input.txt");

    Solution obj;

    while (input.eof() == 0) {
        getline(input, s);
        cout << obj.isValid(s) << endl;
    }

    input.close();
    return 0;
}