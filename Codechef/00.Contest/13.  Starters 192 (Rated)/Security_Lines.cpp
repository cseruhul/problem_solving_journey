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
        int n;
        cin >> n;

        vector<int> security_queues(n);

        for (int i = 0; i < n; i++)
        {
            cin >> security_queues[i];
        }

        int result = security_queues[0];
        int moving_time, exit_time;

        for (int i = 1; i < n; i++)
        {
            moving_time = i;

            if (moving_time >= (security_queues[i] + 1))
            {
                exit_time = moving_time;
            }
            else
            {
                exit_time = security_queues[i] + 1;
            }
            result = min(result, exit_time);
        }

        cout << result << newline;
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