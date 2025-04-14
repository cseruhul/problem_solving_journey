#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> answer;
    set<vector<int>> mySet;

    void helper(vector<int> &a, int i) {
        if (i == a.size()) {
            if (mySet.find(a) == mySet.end()) {
                mySet.insert(a);
                answer.push_back(a);
            }
            return;
        }

        for (int j = i; j < a.size(); j++) {
            swap(a[j], a[i]);
            helper(a, i + 1);
            swap(a[j], a[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int> &nums) {
        helper(nums, 0);
        return answer;
    }
};
int main() {
    vector<int> nums{1, 2, 3};
    vector<vector<int>> ans;
    Solution obj;

    ans = obj.permuteUnique(nums);

    for (auto items : ans) {
        for (auto item : items) {
            cout << item << " ";
        }
        cout << endl;
    }

    return 0;
}