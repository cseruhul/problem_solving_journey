#include <bits/stdc++.h>
using namespace std;
class MyStack {
  public:
    queue<int> q;
    MyStack() {
    }

    void push(int x) {
        q.push(x);
    }

    int pop() {
        int number, size;
        size = q.size();

        for (int i = 1; i < size; i++) {
            number = q.front();
            q.pop();
            q.push(number);
        }
        number = q.front();
        q.pop();
        return number;
    }

    int top() {
        return q.back();
    }

    bool empty() {
        return (q.empty()) ? true : false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 *
 *  Input:
        ["MyStack", "push", "push", "top", "pop", "empty"]
        [[], [1], [2], [], [], []]
    Output
        [null, null, null, 2, 2, false]

 */

int main() {
    MyStack obj;

    obj.push(1);
    obj.push(2);

    cout << obj.top() << endl;
    cout << obj.pop() << endl;
    cout << obj.empty() << endl;

    return 0;
}