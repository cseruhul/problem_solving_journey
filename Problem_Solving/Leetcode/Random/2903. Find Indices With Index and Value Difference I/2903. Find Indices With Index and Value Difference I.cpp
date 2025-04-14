#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int i, j, n;
        n = nums.size();
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if((abs(i - j) >= indexDifference) && (abs(nums[i] - nums[j]) >= valueDifference)){
                    return {i, j};
                }
            }
        }

        return {-1, -1};
    }
};
int main(){
    vector<int>nums{2,1};
    int indexDifference = 0, valueDifference = 0;
    Solution soln;
    vector<int>ans;

    ans = soln.findIndices(nums, indexDifference, valueDifference);

    for(auto item:ans){
        cout << item << " ";
    }
    return 0;
}
