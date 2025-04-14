#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i, n, temp;
        n = nums.size();
        /*
        for(auto item : nums)
            cout << item << " ";
        cout << endl;

        */
        for(i = 0; i < n; i += 2){
            temp = nums[i];
            nums[i] = nums[i + 1];
            nums[i + 1] = temp;
        }

        return nums;

    }
};

int main(){
    vector<int>nums{5,4,2,3};
    vector<int>answer;
    Solution soll;

    answer = soll.numberGame(nums);

    for(auto item:answer)
      cout << item << " ";

    return 0;
}
