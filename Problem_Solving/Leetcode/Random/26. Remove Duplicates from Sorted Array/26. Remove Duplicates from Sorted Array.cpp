#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1, j = 1, n;
        n = nums.size();
        for(i; i < n; i++){
            if(nums[i] != nums[i - 1]){
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    Solution soln;

    int n = soln.removeDuplicates(nums);
    cout << endl << n << endl;

    return 0;
}
