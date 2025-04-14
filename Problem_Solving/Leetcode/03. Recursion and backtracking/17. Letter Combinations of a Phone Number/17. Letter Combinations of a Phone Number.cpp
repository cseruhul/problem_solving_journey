#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<string> keys{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> answer;
    void helperFunction(string digits, int i, string temp) {
        if (i == digits.size()) {
            answer.push_back(temp);
            return;
        }

        for (int j = 0; j < keys[digits[i] - '0'].size(); j++) {
            helperFunction(digits, i + 1, temp + keys[digits[i] - '0'][j]);
        }
    }

    vector<string> letterCombinations(string digits) {
        string temp;
        if (digits.length() == 0)
            return answer;
        else {
            helperFunction(digits, 0, temp);
            return answer;
        }
    }
};

int main() {
    string digits = "23";
    // string digits = "";
    // string digits = "3";
    vector<string> answer;
    Solution obj;

    answer = obj.letterCombinations(digits);
    // cout << answer.size() << endl;
    for (auto item : answer) {
        cout << item << " ";
    }

    return 0;
}