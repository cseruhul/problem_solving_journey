#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, num;
    bool flag = true;
    stack<int> s_a;
    queue<int> q_b;

    cin >> n >> m;

    while (n--)
    {
        cin >> num;
        s_a.push(num);
    }

    while (m--)
    {
        cin >> num;
        q_b.push(num);
    }

    if (s_a.size() != q_b.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        while (!s_a.empty())
        {
            if (s_a.top() != q_b.front())
            {
                flag = false;
                break;
            }
            s_a.pop();
            q_b.pop();
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
