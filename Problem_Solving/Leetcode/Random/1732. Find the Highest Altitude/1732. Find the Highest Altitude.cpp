#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int i, n = gain.size(), answer = INT_MIN;
        vector<int>ans(n + 1);
        ans[0] = 0;

        for(i = 1; i <= n; i++){
            ans[i] = gain[i - 1] + ans[i - 1];
            //cout << ans[i] << " ";
            if(ans[i] > answer)
                answer = ans[i];
        }

        for(i = 0; i <= n; i++){
            //ans[i] = gain[i - 1] + ans[i - 1];
            //cout << ans[i] << " ";
            if(ans[i] > answer)
                answer = ans[i];
        }

        return answer;

    }
};

int main(){
    vector<int> gain = {-4,-3,-2,-1,4,3,2};

    Solution obj;

    cout << endl << obj.largestAltitude(gain);

    return 0;
}
