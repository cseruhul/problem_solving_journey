#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<string> answer;
    void helper(string arr, int i) {
        if (i == arr.size()) {
            answer.push_back(arr);
        }

        for (int j = i; j < arr.size(); j++) {
            swap(arr[i], arr[j]);
            helper(arr, i + 1);
            swap(arr[i], arr[j]);
        }
    }
    string getPermutation(int n, int k) {
        string str;
        for (int i = 0; i < n; i++) {
            str = str + to_string(i + 1);
        }
        helper(str, 0);
        // sort(answer.begin(), answer.end());
        sort(answer.begin(), answer.end());
        return answer[k - 1];
    }
};
int main() {
    int n, k;
    vector<string> ans;
    Solution obj;
    n = 3, k = 5;

    cout << obj.getPermutation(n, k) << endl;

    // for (auto item : ans)
    //     cout << item << " ";

    return 0;
}