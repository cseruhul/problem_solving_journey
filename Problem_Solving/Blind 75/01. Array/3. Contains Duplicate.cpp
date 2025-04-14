#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool containsDup(vector<int> &nums) {
        // Using map.
        // unordered_map<int, int> map;
        // for (int i = 0; i < nums.size(); i++) {
        //     map[nums[i]]++;
        //     if (map[nums[i]] > 1)
        //         return true;
        // }
        // return false;

        /*Using map and two for loop*/

        // unordered_map<int, int> map;
        // for (int i = 0; i < nums.size(); i++) {
        //     map[nums[i]]++;
        // }
        // for (int i = 0; i < nums.size(); i++) {
        //     if (map[nums[i]] > 1)
        //         return true;
        // }

        // return false;

        // Using set operation. as set does not include duplicate.
        unordered_set<int> set;
        for (int i; i < nums.size(); i++) {
            set.insert(nums[i]);
        }
        return !(set.size() == nums.size());
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 1};
    Solution obj;

    cout << obj.containsDup(nums);
    return 0;
}