#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> answer;
    set<vector<int>> mySet;
    void helper(vector<int> &candidates, int target, int i, int tempSum, vector<int> &temp) {
        // boundary case
        if (tempSum > target) {
            return;
        }
        // Base Case
        if (i == candidates.size()) {
            vector<int> ts;
            ts = temp;
            sort(ts.begin(), ts.end());
            if (target == tempSum) {
                if (mySet.find(ts) == mySet.end()) {
                    mySet.insert(ts);
                    answer.push_back(temp);
                }
            }
            return;
        }

        // Including
        tempSum += candidates[i];
        temp.push_back(candidates[i]);
        helper(candidates, target, i + 1, tempSum, temp);
        tempSum -= candidates[i];
        temp.pop_back();

        // Excluding
        helper(candidates, target, i + 1, tempSum, temp);
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        vector<int> temp;
        helper(candidates, target, 0, 0, temp);
        sort(answer.begin(), answer.end());
        return answer;
    }
};
int main() {
    // candidates = [10,1,2,7,6,1,5], target = 8
    vector<int> candidates{10, 1, 2, 7, 6, 1, 5};
    // vector<int> candidates{2, 5, 2, 1, 2};
    int target = 8;
    vector<vector<int>> answer;

    Solution obj;

    answer = obj.combinationSum2(candidates, target);
    // cout << answer.size();
    for (auto items : answer) {
        for (auto item : items) {
            cout << item << " ";
        }
        cout << endl;
    }

    return 0;
}