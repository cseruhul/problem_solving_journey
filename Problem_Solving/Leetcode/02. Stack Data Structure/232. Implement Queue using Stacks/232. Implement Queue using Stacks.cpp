#include <bits/stdc++.h>
using namespace std;
class MyQueue {
  public:
    stack<int> stack1;
    stack<int> stack2;
    MyQueue() {
    }

    void push(int x) {
        stack1.push(x);
    }

    int pop() {
        int n = stack1.size();
        int value;
        for (int i = 1; i < n; i++) {
            value = stack1.top();
            stack1.pop();
            stack2.push(value);
        }
        value = stack1.top();
        stack1.pop();
        n = stack2.size();
        for (int i = 0; i < n; i++) {
            int val = stack2.top();
            stack2.pop();
            stack1.push(val);
        }

        return value;
    }

    int peek() {
        if (!stack1.empty()) {
            int n = stack1.size();
            int value;
            for (int i = 1; i <= n; i++) {
                value = stack1.top();
                stack1.pop();
                stack2.push(value);
            }
            n = stack2.size();
            for (int i = 1; i <= n; i++) {
                int val = stack2.top();
                stack2.pop();
                stack1.push(val);
            }

            return value;
        }
        return 0;
    }

    bool empty() {
        return stack1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
int main() {

    MyQueue *obj = new MyQueue();
    obj->push(1);
    obj->push(2);
    int param_2 = obj->pop();
    cout << param_2 << endl;
    int param_3 = obj->peek();
    cout << param_3 << endl;
    param_2 = obj->pop();
    cout << param_2 << endl;
    bool param_4 = obj->empty();

    cout << param_4 << endl;

    return 0;
}