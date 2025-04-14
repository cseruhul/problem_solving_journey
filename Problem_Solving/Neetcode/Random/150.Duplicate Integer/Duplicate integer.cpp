/*
Input: nums = [1, 2, 3, 3]

Output: true

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        int i;
        for(i = 0; i < nums.size(); i++){
            if(map.find(nums.at(i)) != map.end())
            {
                return true;
            }else{
                map[nums.at(i)] = i;
            }
        }

        return false;
    }
};


int main(){
    vector<int> nums = {1, 2, 3, 4};
    Solution soln;

    cout << "" << endl;

    return 0;
}
