#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size(), i;
        vector<int> ans = nums;
        sort(nums.begin(), nums.end());
        unordered_map<int, int> map;
        for(i = n - 1; i >= 0; i--){
            map[nums[i]] = i;
        }

        for(i = 0; i < n; i++){
            ans[i] = map[ans[i]];
        }

        return {ans};
/*
        int n = nums.size(), answer = 0;
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            answer = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] < nums[i]) {
                    answer++;
                }
            }
            ans[i] = answer;
        }
        for(int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        return {ans};*/
    }
};

int main(){
    vector<int> vec = {8, 1, 2, 2, 3};
    Solution soln;
    soln.smallerNumbersThanCurrent(vec);
    return 0;
}
