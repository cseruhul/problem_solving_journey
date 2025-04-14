#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> answer;
    void helperCombine(int n, int i, int k, vector<int> &temp) {
        if (i > n) {
            if (k == temp.size()) {
                answer.push_back(temp);
            }
            return;
        }
        if (k == temp.size()) {
            answer.push_back(temp);
            return;
        }

        temp.push_back(i);
        helperCombine(n, i + 1, k, temp);
        temp.pop_back();
        helperCombine(n, i + 1, k, temp);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        helperCombine(n, 1, k, temp);
        return answer;
    }
};

int main() {
    int n = 4, k = 2;
    vector<vector<int>> ans;
    Solution obj;

    ans = obj.combine(n, k);

    for (auto items : ans) {
        for (auto item : items) {
            cout << item << " ";
        }
        cout << endl;
    }

    return 0;
}