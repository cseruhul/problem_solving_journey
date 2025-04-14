#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int n;
    vector<vector<string>> answer;

    bool isPalindrome(string s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }

        return true;
    }

    void helperOfPartition(string s, int idx, vector<string> temp) {
        if (idx == n) {
            answer.push_back(temp);
            return;
        }

        for (int i = idx; i < n; i++) {
            if (isPalindrome(s, idx, i)) {
                temp.push_back(s.substr(idx, i - idx + 1));
                helperOfPartition(s, i + 1, temp);
                temp.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        n = s.size();
        vector<string> temp;
        helperOfPartition(s, 0, temp);

        return answer;
    }
};

int main() {
    string s = "aab";
    vector<vector<string>> answer;
    Solution obj;

    answer = obj.partition(s);

    for (auto items : answer) {
        for (auto item : items) {
            cout << item << " ";
        }
        cout << endl;
    }

    return 0;
}