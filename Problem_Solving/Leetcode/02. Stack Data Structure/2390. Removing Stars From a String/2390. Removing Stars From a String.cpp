#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeStars(string s) {
        stack<char> charStack;
        string answer = "";
        int n = s.length();
        for (const char ch : s) {
            if (ch == '*') {
                if (!charStack.empty()) {
                    charStack.pop();
                }
            } else {
                charStack.push(ch);
            }
        }

        while (!charStack.empty()) {
            answer += charStack.top();
            charStack.pop();
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};

int main() {
    string s, answer;
    Solution obj;

    ifstream input;
    input.open("input.txt");
    while (input.eof() == 0) {
        getline(input, s);
        answer = obj.removeStars(s);
        cout << answer << endl;
    }

    input.close();
    return 0;
}