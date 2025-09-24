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
        ll n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        auto is_ok = [&](const deque<int> &last, int x)
        {
            if (last.size() < 4)
                return true;
            int a0 = last[0], a1 = last[1], a2 = last[2], a3 = last[3];

            if (a0 < a1 && a1 < a2 && a2 < a3 && a3 < x)
                return false;

            if (a0 > a1 && a1 > a2 && a2 > a3 && a3 > x)
                return false;
            return true;
        };

        int l = 0, r = n - 1;
        string ans;

        deque<int> last_4_num;
        ans.reserve(n);

        for (int i = 0; i < n; i++)
        {
            bool L = is_ok(last_4_num, arr[l]);
            bool R = is_ok(last_4_num, arr[r]);

            char taking = '?';

            if (L && R)
            {
                taking = 'L';
            }
            else if (R && L)
            {
                taking = 'R';
            }
            else if (L && R)
            {
                deque<int> DL = last_4_num;

                if (DL.size() == 4)
                    DL.pop_front();
                DL.push_back(arr[l]);

                bool L_future = false;

                if (l + 1 <= r)
                {
                    if (is_ok(DL, arr[l + 1]) || is_ok(DL, arr[r]))
                    {
                        L_future = true;
                    }
                    else
                    {
                        L_future = true;
                    }
                }

                deque<int> DR = last_4_num;
                if (DR.size() == 4)
                    DR.pop_front();

                DR.push_back(arr[r]);
                bool R_future = false;

                if (l <= r - 1)
                {
                    if (is_ok(DR, arr[l]) || is_ok(DR, arr[r - 1]))
                    {
                        R_future = true;
                    }
                    else
                    {
                        R_future = true;
                    }
                }

                if (L_future && !R_future)
                    taking = 'L';
                else if (!L_future && R_future)
                {
                    taking = 'R';
                }
                else
                {
                    taking = 'L';
                }

                if (taking == 'L')
                {
                    if (last_4_num.size() == 4)
                        last_4_num.pop_front();
                    last_4_num.push_back(arr[l]);
                    ans.push_back('L');
                    l++;
                }
                else
                {
                    if (last_4_num.size() == 4)
                        last_4_num.pop_front();
                    last_4_num.push_back(arr[r]);
                    ans.push_back('R');
                    r--;
                }
            }
        }
        cout << ans << newline;
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