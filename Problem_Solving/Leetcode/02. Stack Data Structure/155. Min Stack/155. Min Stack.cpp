#include <bits/stdc++.h>
using namespace std;
class MinStack {
  public:
    stack<int> stack1, minStack;
    int min;
    MinStack() {
    }

    void push(int val) {
        stack1.push(val);
        min = (minStack.empty()) ? INT_MAX : minStack.top();
        min = (val < min) ? val : min;
        minStack.push(min);
    }

    void pop() {
        stack1.pop();
        minStack.pop();
    }

    int top() {
        return stack1.top();
    }

    int getMin() {
        return minStack.top();
    }
};

int main() {
    MinStack *obj = new MinStack();
    obj->push(-2);
    obj->push(0);
    obj->push(-3);
    cout << obj->getMin() << endl;
    obj->pop();
    cout << obj->top() << endl;
    cout << obj->getMin() << endl;

    return 0;
}