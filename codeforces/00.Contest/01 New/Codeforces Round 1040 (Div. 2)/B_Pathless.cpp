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
        int n, sum;
        cin >> n >> sum;

        vector<int> arr(n);

        int zero = 0, one = 0, two = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                zero++;
            else if (arr[i] == 1)
                one++;
            else
                two++;
        }

        auto print_digits = [&](int digit, int number)
        {
            for (int i = 0; i < digit; i++)
                cout << number << " ";
        };

        int B = one + (two << 1);

        if (sum < B)
        {
            print_digits(zero, 0);
            print_digits(one, 1);
            print_digits(two, 2);
        }
        else if (sum == B + 1)
        {
            print_digits(zero, 0);
            print_digits(two, 2);
            print_digits(one, 1);
        }
        else
        {
            cout << -1;
        }

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