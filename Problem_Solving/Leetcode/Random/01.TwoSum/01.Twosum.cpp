#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int>twoSum(vector<int>&nums, int target){
            int i, val1, val2;
            unordered_map<int, int>map;

            for(i = 0; i < nums.size(); i++){
                val1 = nums.at(i);
                val2 = target - val1;
                if(map.find(val2) == map.end()){
                    map[nums[i]] = i;
                }
                else
                {
                    cout << map[val2] << " " << i << endl;
                    return { };
                }
            }

            return {};

        }

};

int main(){
    int n;
    vector<int> nums = {1, 2, 3, 7, 5};
    n = 12;

    Solution solObj;
    solObj.twoSum(nums, n);


    return 0;
}
