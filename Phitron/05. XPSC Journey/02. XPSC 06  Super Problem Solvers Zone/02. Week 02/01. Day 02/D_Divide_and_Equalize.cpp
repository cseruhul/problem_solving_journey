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

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // for (auto item : arr)
        //     cout << item << " ";
        // cout << newline;

        map<int, int> prime_factor;

        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j * j <= arr[i]; j++)
            {
                if (arr[i] % j == 0)
                {
                    while (arr[i] % j == 0)
                    {
                        prime_factor[j]++;
                        arr[i] /= j;
                    }
                }
            }
            if (arr[i] > 1)
                prime_factor[arr[i]]++;
        }

        bool flag = true;
        for (auto item : prime_factor)
        {
            if (item.second % n != 0)
            {
                flag = false;
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