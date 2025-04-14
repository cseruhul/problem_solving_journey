#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool flag = true;
        int n = arr.size(), i;
        if (n < 3)
            return false;
        else {
            for (i = 1; i < n - 1; i++) {
                if (arr[i - 1] >= arr[i])
                    break;
            }

            if (i <= 1) {
                return false;
            } else {
                for (; i < n; i++) {
                    if (arr[i] >= arr[i - 1]) {
                        flag = false;
                        break;
                    }
                }
            }
        }
        return flag;
    }
};

int main(){
    vector<int> arr = {0, 2, 3, 4,5,2,1,0};
    Solution solution;

    cout << solution.validMountainArray(arr);

    return 0;
}
