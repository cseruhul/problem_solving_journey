#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    stack<int> stk1;
    stack<int> stk2;
    cin >> n;

    while (n--)
    {
        int num;
        cin >> num;
        stk1.push(num);
    }

    while (!stk1.empty())
    {
        stk2.push(stk1.top());
        stk1.pop();
    }

    while (!stk2.empty())
    {
        cout << stk2.top() << " ";
        stk2.pop();
    }

    return 0;
}