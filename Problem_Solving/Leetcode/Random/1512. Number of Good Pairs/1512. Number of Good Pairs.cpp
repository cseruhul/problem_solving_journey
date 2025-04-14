#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> map;
        int i, ans = 0, n;
        for(i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }

        unordered_map<int, int> :: iterator itr;
        for(itr = map.begin(); itr != map.end(); itr++){
            n = itr->second;
            ans += n*(n-1)/2;

            //cout << itr->first << " " << itr->second << endl;
        }
            return ans;
    }
};

int main(){
    vector<int> nums = {1,2,3,1,1,3};

    Solution soln;
    soln.numIdenticalPairs(nums);
    return 0;
}
