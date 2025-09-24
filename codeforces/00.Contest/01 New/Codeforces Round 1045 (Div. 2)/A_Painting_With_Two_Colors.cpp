#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, a, b;
        cin >> n >> a >> b;

        if ((n - b) % 2 != 0)
        {
            cout << "NO" << newline;
            return;
        }

        ll mid = (n - b + 2) / 2;
        ll left = mid;
        ll right = mid + b - 1;

        if ((n - a) % 2 == 0)
        {
            cout << "YES" << newline;
            return;
        }

        set<ll> numbers;
        numbers.insert(1);

        if (1 > (n - a + 1))
        {
            numbers.insert(1);
        }
        else
        {
            numbers.insert(n - a + 1);
        }

        vector<ll> arr(10);

        arr[0] = left;
        arr[1] = left - (a - 1);
        arr[2] = right;
        arr[3] = right - (a - 1);
        arr[4] = n - left + 1;
        arr[5] = n - right + 1;
        arr[6] = n - a - left + 2;
        arr[7] = n - a - right + 2;
        arr[8] = (n - a + 2) / 2;
        arr[9] = (n - a + 3) / 2;

        for (auto item : arr)
        {
            for (int i = -2; i <= 2; ++i)
            {
                numbers.insert(item + i);
            }
        }

        auto OK = [&](ll x)
        {
            ll l1 = x;
            ll r1 = x + a - 1;

            ll l2 = n - x - a + 2;
            ll r2 = n - x + 1;

            if (l1 > l2)
            {
                swap(l1, l2);
                swap(r1, r2);
            }

            if (r1 < l2)
            {
                return (l1 >= left && r1 <= right && l2 >= left && r2 <= right);
            }

            bool ok = true;
            if (l1 <= l2 - 1)
            {
                if (!(l1 >= left && l2 - 1 <= right))
                    ok = false;
            }
            if (r1 + 1 <= r2)
            {
                if (!(r1 + 1 >= left && r2 <= right))
                    ok = false;
            }
            return ok;
        };

        bool flag = false;

        ll min_of_x = 1, max_of_x = n - a + 1;

        for (auto item : numbers)
        {
            if (item < min_of_x or item > max_of_x)
            {
                continue;
            }
            if (OK(item))
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "YES" << newline;
        else
            cout << "NO" << newline;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}