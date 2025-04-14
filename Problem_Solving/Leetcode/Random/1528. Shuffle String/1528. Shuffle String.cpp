#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int i, n = s.size();
        string ans(n, ' ');

        for(i = 0; i < n; i++){
            ans[indices.at(i)] = s[i];
            //cout << i << ". " << ans[i] << endl;
        }
       /* for(i = 0; i < n; i++){
            //ans[indices.at(i)] = s[i];
            cout << i << ". " << ans[i] << endl;
        }*/
        return ans;
    }
};

int main(){
    vector<int>items{4,5,6,7,0,2,1,3};
    string s = "codeleet";
    string ss;
    Solution soll;

    ss = soll.restoreString(s, items);


    return 0;
}
