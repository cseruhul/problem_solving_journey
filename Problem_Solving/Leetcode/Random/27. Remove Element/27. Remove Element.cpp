#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int removeElement(vector<int>& nums, int val){
        int i, j = 0, n;
        n = nums.size();
        for(i = 0; i < n; i++){
            if(nums.at(i) != val){
                nums.at(j++) = nums.at(i);
            }
        }

        return j;
    }
};

int main(){
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;

    Solution obj;

    cout << obj.removeElement(nums, val);

    return 0;
}
