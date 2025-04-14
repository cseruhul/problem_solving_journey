#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int calculate(string s) {
        int n, answer = 0, lastNumber = 0;
        char lastOperator = '+';
        s += "+";
        stack<int> allNumber;
        n = s.length();

        for (int i = 0; i < n; i++) {
            if (isdigit(s[i])) {
                lastNumber = lastNumber * 10 + (s[i] - '0');
            } else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                if (lastOperator == '+') {
                    allNumber.push(lastNumber);
                } else if (lastOperator == '-') {
                    allNumber.push(lastNumber * (-1));
                } else if (lastOperator == '*') {
                    int n1 = allNumber.top();
                    allNumber.pop();
                    allNumber.push(n1 * lastNumber);
                } else if (lastOperator == '/') {
                    int n2 = allNumber.top();
                    allNumber.pop();
                    allNumber.push(n2 / lastNumber);
                }
                lastNumber = 0;
                lastOperator = s[i];
            }
        }

        while (!allNumber.empty()) {
            answer += allNumber.top();
            allNumber.pop();
        }

        return answer;
    }
};

int main() {
    string s = "3+2*2";
    Solution obj;

    ifstream input;
    input.open("input.txt");
    while (input.eof() == 0) {
        getline(input, s);
        cout << obj.calculate(s) << endl;
    }
    input.close();

    return 0;
}