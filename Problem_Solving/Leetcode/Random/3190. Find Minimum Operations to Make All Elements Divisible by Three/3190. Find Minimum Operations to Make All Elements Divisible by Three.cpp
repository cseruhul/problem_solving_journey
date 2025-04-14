#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans=0;
        for(auto item:nums){
            if(item % 3 != 0)
                ans++;
        }
        /*
        int mod = 0, i, ans = 0, n;
        n = nums.size();

        for(i = 0; i < n; i++){
            mod = nums[i] % 3;
            cout << mod << endl;
            if(mod == 0){
                ans += 0;
            }
            else if(mod * 2 < 3){
                ans += mod;
            }else{
                ans += (3-mod);
            }
        }
*/
        return ans;
    }
};

int main(){
    vector<int>nums{8};
    Solution soln;

    cout << soln.minimumOperations(nums);
    return 0;
}
