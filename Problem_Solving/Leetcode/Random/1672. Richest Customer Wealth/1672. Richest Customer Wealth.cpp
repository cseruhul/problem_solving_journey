#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        int i, j;
        for(i = 0; i < accounts.size(); i++){
            int sum = 0;
            for(j = 0; j < accounts[i].size(); j++){
                sum += accounts[i][j];
            }
            if(sum > maxWealth)
                maxWealth = sum;
        //cout << sum << endl;
        }
        return maxWealth;
    }
};

int main(){
    vector<vector<int>> accounts{{1,2,3},{3,2,1}};
    Solution sol;
    //int result = sol.maximumWealth(accounts);

    cout << sol.maximumWealth(accounts);
    return 0;
}
