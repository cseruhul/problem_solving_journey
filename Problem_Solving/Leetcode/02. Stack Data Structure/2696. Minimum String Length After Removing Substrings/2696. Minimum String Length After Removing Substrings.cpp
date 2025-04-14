#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int minLength(string s) {
        stack<char> charStack;
        for (const char charitem : s) {
            if ((!charStack.empty()) && ((charitem == 'B' && charStack.top() == 'A') || (charitem == 'D' && charStack.top() == 'C'))) {
                charStack.pop();
            } else {
                charStack.push(charitem);
            }
        }

        return charStack.size();
    }
};
int main() {
    Solution obj;
    int n;
    ifstream input;
    input.open("input.txt");

    while (input.eof() == 0) {
        string str;
        input >> str;
        n = obj.minLength(str);

        cout << n << endl;
    }

    input.close();

    return 0;
}