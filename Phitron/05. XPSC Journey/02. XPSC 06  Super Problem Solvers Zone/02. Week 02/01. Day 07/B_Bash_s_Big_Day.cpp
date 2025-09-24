#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e5 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> prime_factor;
        for (int i = 0; i < n; i++)
        {
            int num = arr[i];
            for (int j = 2; j * j <= num; j++)
            {
                if (num % j == 0)
                {
                    prime_factor[j]++;
                }
                while (num % j == 0)
                {
                    num /= j;
                }
            }
            if (num > 1)
                prime_factor[num]++;
        }

        int ans = 1;
        for (auto item : prime_factor)
        {
            ans = max(ans, item.second);
        }

        cout << ans << newline;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.solve();

    return 0;
}