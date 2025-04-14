#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<string> buildArray(vector<int> &target, int n) {
        unordered_map<int, bool> map;
        vector<string> ans;

        for (auto item : target) {
            map[item] = true;
        }

        for (int i = 1; i <= n; i++) {
            ans.push_back("Push");
            if (map[i] == false) {
                ans.push_back("Pop");
            }
            if (i == target.back()) break;
        }

        return ans;
    }
};
int main() {
    vector<int> target{3, 6};
    vector<string> ans;
    int n = 6;
    Solution obj;
    ans = obj.buildArray(target, n);
    for (auto item : ans) {
        cout << item << " ";
    }
    // Input: target = [3,6], n = 6
    // Output:
    //   ["Push","Pop","Push","Pop","Push","Push","Pop","Push","Pop","Push"]

    // cout << "Please enter a number: ";
    // cin >> n;

    // unordered_map<int, int>::iterator itr;
    // for (itr = map.begin(); itr != map.end(); itr++) {

    // }

    return 0;
}