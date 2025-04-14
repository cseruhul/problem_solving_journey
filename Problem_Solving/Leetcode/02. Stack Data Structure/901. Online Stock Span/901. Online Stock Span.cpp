#include <bits/stdc++.h>
using namespace std;

class StockSpanner {
    stack<pair<int, int>> price_span_stack;

  public:
    StockSpanner() {
    }

    int next(int price) {
        int span = 1;
        while (!price_span_stack.empty() && price_span_stack.top().first <= price) {
            span += price_span_stack.top().second;
            price_span_stack.pop();
        }

        price_span_stack.push({price, span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
int main() {
    StockSpanner *obj = new StockSpanner();
    int param_1;

    ifstream input;
    input.open("input.txt");

    while (input.eof() == 0) {
        input >> param_1;
        cout << obj->next(param_1) << endl;
    }

    input.close();

    return 0;
}