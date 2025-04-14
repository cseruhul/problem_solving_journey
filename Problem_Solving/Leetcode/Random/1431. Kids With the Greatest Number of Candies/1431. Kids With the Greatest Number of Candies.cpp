#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max_val = *max_element(candies.begin(), candies.end());
        int i;
        for(i = 0; i < candies.size(); i++){
                ans.push_back(candies[i] + extraCandies >= max_val);
        }

        return {ans};

    }
};
int main(){
    vector<int>candies{2,3,5,1,3};
    int extraCandies = 3;

    Solution soln;

    soln.kidsWithCandies(candies, extraCandies);

    return 0;
}
