#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        for(auto item : nums){
            if(item < k)
                ans++;
        }

        return ans;
    }
};

int main(){
    vector<int>nums{1,1,2,4,9};
    vector<int>answer;
    int Answer;
    int k = 9;
    Solution soll;

    Answer = soll.minOperations(nums, k);
cout << Answer;
    //for(auto item:answer)
      //cout << item << " ";

    return 0;
}
