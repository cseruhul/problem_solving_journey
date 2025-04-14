#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i, n;
        n = nums.size();
        vector<int>left(n);
        vector<int>right(n);
        vector<int>answer(n);

        left.at(0) = 1;
        right.at(n-1) = 1;
        for(i = 1; i < n;i++){
            left.at(i) = nums.at(i-1)*left.at(i-1);
        }
        for(i = n-1; i > 0;i--){
            right.at(i-1) = nums.at(i)*right.at(i);
        }
        for(i = 0; i < n; i++){
            answer.at(i) = left.at(i) * right.at(i);
        }
        return answer;
    }
};

int main(){
    vector<int>nums{1,2,3,4};
    vector<int>answer;
    Solution solnObj;

    answer = solnObj.productExceptSelf(nums);

    for(auto item:answer){
        cout << item << " ";
    }
    return 0;
}
