#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string bin_str;
    stack<char> bin_stk;
    cin >> t;

    while (t--)
    {
        cin >> bin_str;

        for (auto bit : bin_str)
        {
            if (bin_stk.empty())
            {
                bin_stk.push(bit);
            }
            else
            {
                if (bit == '1' and bin_stk.top() == '0')
                {
                    bin_stk.pop();
                }
                else
                {
                    bin_stk.push(bit);
                }
            }
        }

        if (bin_stk.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        while (!bin_stk.empty())
        {
            bin_stk.pop();
        }
    }

    return 0;
}
