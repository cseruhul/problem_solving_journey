#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    stack<char> S;
    stack<char> T;
    bool backspaceCompare(string s, string t) {
        clear();
        for (auto item : s) {
            if (item == '#') { //&& !S.empty() || item == '#'
                if (!S.empty())
                    S.pop();
            } else {
                S.push(item);
            }
        }
        for (auto item : t) {
            if (item == '#') { //&& !T.empty() || item == '#'
                if (!T.empty())
                    T.pop();
            } else {
                T.push(item);
            }
        }
        // display(S);
        // cout << " ";
        // display(T);
        // while (!T.empty()) {
        //     cout << T.top();
        //     T.pop();
        // }
        // cout << "\n";
        return stackCompare(T, S);
    }
    void clear() {
        while (!S.empty()) {
            S.pop();
        }
        while (!T.empty()) {
            T.pop();
        }
    }
    void display(stack<char> ss) {
        while (!ss.empty()) {
            cout << ss.top();
            ss.pop();
        }
    }
    bool stackCompare(stack<char> a, stack<char> b) {
        if (a.size() != b.size()) {
            return false;
        } else {
            int n = a.size();
            for (int i = 0; i < n; i++) {
                if (a.top() != b.top()) {
                    return false;
                }
                a.pop();
                b.pop();
            }
        }
        return true;
    }
};

int main() {
    Solution obj;
    string s, t;

    ifstream input;
    input.open("input.txt");
    while (input.eof() == 0) {
        input >> s >> t;
        // cout << s << " " << t << endl;
        cout << obj.backspaceCompare(s, t) << endl;
    }
    input.close();

    return 0;
}