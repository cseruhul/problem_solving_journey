#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> answer;
    void helperFunction(vector<int> &candidates, int target, int i, int tempSum, vector<int> temp) {
        // Bound case
        if (tempSum > target)
            return;

        // Base case
        if (i == candidates.size()) {
            if (tempSum == target) {
                answer.push_back(temp);
            }
            return;
        }

        // Including
        tempSum += candidates[i];
        temp.push_back(candidates[i]);
        helperFunction(candidates, target, i, tempSum, temp);
        tempSum -= candidates[i];
        temp.pop_back();

        // Excluding
        helperFunction(candidates, target, i + 1, tempSum, temp);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        vector<int> temp;
        helperFunction(candidates, target, 0, 0, temp);

        return answer;
    }
};

int main() {
    // candidates = [2,3,6,7], target = 7
    // vector<int> candidates{2, 3, 6, 7};
    vector<int> candidates{2, 3, 5};
    int target = 8;
    vector<vector<int>> answer;

    Solution obj;

    answer = obj.combinationSum(candidates, target);

    for (auto items : answer) {
        for (auto item : items) {
            cout << item << " ";
        }
        cout << endl;
    }

    return 0;
}