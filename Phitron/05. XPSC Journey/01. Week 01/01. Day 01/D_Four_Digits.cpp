#include <bits/stdc++.h>
using namespace std;

int digit_count(int n)
{
    int digit = 0;

    while (n)
    {
        digit++;
        n = n / 10;
    }

    return digit;
}

string convert_to_str(int n, int digits)
{
    stack<int> stk;
    while (n)
    {
        stk.push(n % 10);
        n = n / 10;
    }

    string ans;

    int diff = 4 - digits;

    while (diff)
    {
        ans.push_back('0');
        diff--;
    }

    while (!stk.empty())
    {
        ans.push_back('0' + stk.top());
        stk.pop();
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, digits;

    cin >> n;
    digits = digit_count(n);

    if (digits == 4)
    {
        cout << n << endl;
    }
    else
    {
        string ans;
        ans = convert_to_str(n, digits);
        cout << ans << endl;
    }
    return 0;
}