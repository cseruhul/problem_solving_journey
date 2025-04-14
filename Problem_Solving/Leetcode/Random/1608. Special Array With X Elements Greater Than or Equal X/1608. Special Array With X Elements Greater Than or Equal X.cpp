#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int specialArray(vector<int>& nums) {
        unordered_map<int, int> num;
        int i, n;

        n = nums.size();
        for(i = 0; i <= n; i++){
            for(int j = 0; j < n; j++){
                if(i <= nums[j])
                    num[i]++;
            }
        }

        unordered_map<int, int>::iterator itr;
        for(itr = num.begin(); itr != num.end(); itr++){
            if(itr->first == itr->second)
                return itr->first;
        }
return -1;
    }
};
int main(){
    vector<int>nums{3,5};
    Solution obj;

    cout << obj.specialArray(nums);
    return 0;
}
