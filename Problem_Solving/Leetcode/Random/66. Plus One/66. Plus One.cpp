#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size(), i, number = 0;
        vector<int> answer;
        for(i = 0; i < n; i++){
            number = number * 10 + digits[i];
        }
            number += 1;
        while(number){
            answer.push_back(number % 10);
            number = number / 10;
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};
int main(){
    vector<int>digits{9,8,7,6,5,4,3,2,1,0};
    Solution soln;

    vector<int>ans;
    ans = soln.plusOne(digits);

    for(auto item : ans){
        cout << item << " ";
    }
    return 0;
}
