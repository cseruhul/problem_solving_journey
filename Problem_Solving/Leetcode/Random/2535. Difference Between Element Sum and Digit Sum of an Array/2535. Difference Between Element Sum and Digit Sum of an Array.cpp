#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0, digitSum = 0, n;
        for(auto item : nums){
            n = item;
            elementSum += n;
            if(n > 9){
                while(n){
                    digitSum += n % 10;
                    n = n / 10;
                }
            }
            else{
                digitSum += n;
            }
        }

        return abs(elementSum - digitSum);
    }
};

int main(){
    vector<int> nums {1,2,3,4};
    Solution solnObj;

    cout << solnObj.differenceOfSum(nums);
    return 0;
}
