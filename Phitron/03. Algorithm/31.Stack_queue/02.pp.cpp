#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> stk;
    queue<int> q;
    int n, num;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        stk.push(num);
    }

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        q.push(num);
    }

    if (stk.size() != q.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = true;
        while (!q.empty())
        {
            if (q.front() != stk.top())
            {
                flag = false;
                break;
            }
            q.pop();
            stk.pop();
        }

        if (flag)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}