#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
    int n, i;
    n = nums.size();
    vector<int>leftSum(n);
    vector<int>rightSum(n);
    vector<int>answer(n);

    leftSum[0] = rightSum[n - 1] = 0;

    for(i = 1; i < n; i++)
        leftSum[i] = leftSum[i - 1] + nums[i - 1];

    for(i = n - 2; i >= 0; i--)
        rightSum[i] = rightSum[i + 1] + nums[i + 1];

    for(i = 0; i < n; i++)
        answer[i] = abs(leftSum[i] - rightSum[i]);

    for(i = 0; i < n; i++)
            cout << answer[i] << " ";


    /*


        int i, n, left, right, j;
        n = nums.size();
        vector<int> answer(n);

        for(i = 0; i < n; i++){
            left = 0;
            right = 0;
            for(j = i-1; j >= 0; j--){
                left += nums[j];
            }
            for(j = i + 1; j < n; j++){
                right += nums[j];
            }
            answer[i] = abs(left - right);
        }
        return answer;
        for(i = 0; i < n; i++)
            cout << answer[i] << " ";
    */
    }
};

int main(){
    vector<int> nums = {2, 2, 5, 7, 3, 6};
    Solution obj1;

    obj1.leftRightDifference(nums);

    return 0;
}
