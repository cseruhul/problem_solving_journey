#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    stack<int> stk;
    queue<int> q1, q2;

    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        q1.push(num);
    }

    while (q1.size() > 0)
    {
        stk.push(q1.front());
        q1.pop();
    }

    while (!stk.empty())
    {
        q2.push(stk.top());
        stk.pop();
    }

    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }

    return 0;
}