#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l, r, m;
        l = 0;
        r = nums.size() - 1;
        while (l <= r) {
            m = l + (r - l) / 2;
            if (nums[m] == target)
                return m;
            else if (target > nums[m]) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return l;
    }
};

int main(){
    vector<int>nums ={1};
    int target = 0;
    Solution obj;

    cout << obj.searchInsert(nums, target);

    return 0;
}
