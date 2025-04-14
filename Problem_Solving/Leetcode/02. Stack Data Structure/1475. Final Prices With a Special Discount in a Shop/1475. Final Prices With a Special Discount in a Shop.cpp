#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> finalPrices(vector<int> &prices) {
        int n;
        n = prices.size();
        unordered_map<int, int> discount_map;
        stack<int> lowpriceStack;
        vector<int> answer;

        for (int i = n - 1; i >= 0; i--) {
            while (!lowpriceStack.empty() && lowpriceStack.top() > prices[i]) {
                lowpriceStack.pop();
            }
            int value = (lowpriceStack.empty()) ? 0 : lowpriceStack.top();
            lowpriceStack.push(prices[i]);

            // answer[n - i] = prices[i] - value;
            answer.push_back(prices[i] - value);
            //  discount_map[prices[i]] = prices[i] - value;
        }

        // unordered_map<int, int>::iterator itr;
        // for (itr = discount_map.begin(); itr != discount_map.end(); itr++) {
        //     cout << itr->first << " " << itr->second << endl;
        // }
        // cout << endl;
        // for (auto item : prices) {
        //     answer.push_back(discount_map[item]);
        // }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};

int main() {
    vector<int> prices = {8, 4, 6, 2, 3};
    // vector<int> prices = {1, 2, 3, 4, 5};
    // vector<int> prices = {10, 1, 1, 6};
    vector<int> answerVector;

    Solution obj;
    answerVector = obj.finalPrices(prices);

    for (auto item : answerVector) {
        cout << item << " ";
    }

    return 0;
}