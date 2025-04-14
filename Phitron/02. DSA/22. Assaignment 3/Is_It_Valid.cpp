#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    stack<char> stk;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        for (auto bit : str)
        {
            if (stk.empty())
            {
                stk.push(bit);
            }
            else
            {
                if ((bit == '0' and stk.top() == '1') or (bit == '1' and stk.top() == '0'))
                {
                    stk.pop();
                }
                else
                {
                    stk.push(bit);
                }
            }
        }

        if (stk.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        while (!stk.empty())
        {
            stk.pop();
        }
    }

    return 0;
}
