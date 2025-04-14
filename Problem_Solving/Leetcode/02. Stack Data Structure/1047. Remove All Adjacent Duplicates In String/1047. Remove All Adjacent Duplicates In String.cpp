#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeDuplicates(string s) {
        string ans = "";
        stack<char> answer;
        for (const char item : s) {
            if (answer.empty()) {
                answer.push(item);
            } else {
                if (item == answer.top()) {
                    answer.pop();
                } else {
                    answer.push(item);
                }
            }
        }
        while (!answer.empty()) {
            ans += answer.top();
            answer.pop();
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
        string s;
        input >> s;
        cout << obj.removeDuplicates(s) << endl;
    }
    input.close();

    return 0;
}