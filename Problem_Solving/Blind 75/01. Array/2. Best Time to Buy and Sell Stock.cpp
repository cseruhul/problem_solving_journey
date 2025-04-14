#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int buyAndSellStock(vector<int> &prices) {
        int buy = prices[0], sell, profit = 0, new_profit = 0, i, n;
        n = prices.size();
        for (i = 1; i < n; i++) {
            sell = prices[i];
            new_profit = sell - buy;
            profit = (new_profit > profit) ? new_profit : profit;
            buy = (sell < buy) ? sell : buy;
        }

        return profit;
    }
};
int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    Solution obj;
    cout << obj.buyAndSellStock(prices) << endl;
    return 0;
}