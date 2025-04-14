#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n, i;
        n = encoded.size();
        vector<int> ans(n);

        ans[0] = first;
        for(i = 0; i < n; i++){
            ans[i + 1] = encoded[i] ^ ans[i];
        }

        for(i = 0; i <= n; i++)
            cout << ans[i] << " ";
        //return {ans};

    }
};

int main(){
    vector<int>encoded = {1, 2, 3};
    int first = 1;

    Solution solObj2;
    solObj2.decode(encoded, first);
    return 0;
}
