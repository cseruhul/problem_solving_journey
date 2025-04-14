#include <bits/stdc++.h>
using namespace std;

bool comp(stack<int> stk1, queue<int> stk2)
{
    bool ans = true;
    while (!stk1.empty())
    {
        if (stk1.top() != stk2.front())
        {
            ans = false;
            break;
        }
        stk1.pop();
        stk2.pop();
    }

    return ans;
}

int main()
{
    stack<int> stk;
    queue<int> que;
    int n, m;

    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        stk.push(num);
    }

    cin >> m;
    while (m--)
    {
        int num;
        cin >> num;
        que.push(num);
    }

    if (stk.size() != que.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        if (comp(stk, que))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}