#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int evalRPN(vector<string> &tokens) {
        stack<long long> numbers;
        long long number1, number2;

        for (auto item : tokens) {
            if (item == "+" || item == "-" || item == "*" || item == "/") {
                number2 = numbers.top();
                numbers.pop();
                number1 = numbers.top();
                numbers.pop();

                if (item == "+")
                    numbers.push(number1 + number2);
                else if (item == "-")
                    numbers.push(number1 - number2);
                else if (item == "*")
                    numbers.push(number1 * number2);
                else if (item == "/")
                    numbers.push(number1 / number2);

                /*} else if (item == "-") {
                    number2 = numbers.top();
                    numbers.pop();
                    number1 = numbers.top();
                    numbers.pop();
                    numbers.push(number1 - number2);
                } else if (item == "*") {
                    number2 = numbers.top();
                    numbers.pop();
                    number1 = numbers.top();
                    numbers.pop();
                    numbers.push(number1 * number2);
                } else if (item == "/") {
                    number2 = numbers.top();
                    numbers.pop();
                    number1 = numbers.top();
                    numbers.pop();
                    numbers.push(number1 / number2);*/
            } else {
                numbers.push(stoi(item));
            }
        }

        return numbers.top();
    }
};

int main() {
    // vector<string> tokens{"2", "1", "+", "3", "*"};
    // vector<string> tokens{"4", "13", "5", "/", "+"};
    vector<string> tokens{"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    Solution obj;

    cout << obj.evalRPN(tokens) << endl;

    return 0;
}