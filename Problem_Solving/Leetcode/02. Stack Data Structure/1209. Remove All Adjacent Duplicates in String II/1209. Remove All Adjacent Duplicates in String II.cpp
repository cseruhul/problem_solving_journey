#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> charStack;
        string ans = "";

        for (const char ch : s) {
            if (charStack.empty()) {
                charStack.push({ch, 1});
            } else {
                if (charStack.top().first == ch) {
                    charStack.top().second++;
                } else {
                    charStack.push({ch, 1});
                }
            }

            if (charStack.top().second == k) {
                charStack.pop();
            }
        }

        while (!charStack.empty()) {
            ans.append(charStack.top().second, charStack.top().first);
            charStack.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    // string s = "deeedbbcccbdaa";
    // string s = "pbbcggttciiippooaais";
    string s = "abcd";
    string ans;
    int k;
    Solution obj;

    ifstream input;
    input.open("input.txt");
    while (input.eof() == 0) {
        input >> s >> k;
        ans = obj.removeDuplicates(s, k);
        cout << s << "=>" << ans << endl;
    }
    input.close();

    return 0;
}