#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> getconcatenation(vector<int>&nums){
        int n = nums.size(), j = 0;
        vector<int> ans(n+n);
        for(int i = 0; i < n*2; i++, j++){
            if(j == n)
                j = 0;
            //cout << i <<" " << j << endl;
            ans[i] = nums[j];
            //cout << ans.at(i) <<" ";
        }
    return ans;
    }
};

int main(){
    vector<int> nums = {1,2,3};
    vector<int> ans(2*nums.size());
    Solution soln;
    int i;
    //cout << nums << endl;

    ans = soln.getconcatenation(nums);
    for(i = 0; i < ans.size(); i++)
        cout << ans.at(i) << " ";


    return 0;
}
