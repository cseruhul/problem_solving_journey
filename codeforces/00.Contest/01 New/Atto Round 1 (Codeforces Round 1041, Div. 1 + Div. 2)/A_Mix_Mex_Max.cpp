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

        auto is_good = [&]()
        {
            unordered_set<int> numbers;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != -1)
                {
                    numbers.insert(arr[i]);
                }
            }

            int set_size = numbers.size();
            if (set_size == 0)
            {
                return true;
            }

            if (set_size > 1)
            {
                return false;
            }

            int num = *(numbers.begin());

            return num > 0;
        };

        if (is_good())
            cout << "YES";
        else
            cout << "NO";

        cout << newline;
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