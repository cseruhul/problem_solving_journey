#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string makeGood(string s) {
        string ans;
        stack<char> Answer;
        for (const char a : s) {
            if (!Answer.empty() && (abs(a - Answer.top()) == 32)) {
                Answer.pop();
            } else {
                Answer.push(a);
            }
        }

        while (!Answer.empty()) {
            ans += Answer.top();
            Answer.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution obj;

    ifstream input;
    input.open("input.txt");
    while (input.eof() == 0) {
        string sInput, sAns;
        input >> sInput;
        sAns = obj.makeGood(sInput);
        cout << sAns << endl;
    }
    input.close();
    return 0;
}