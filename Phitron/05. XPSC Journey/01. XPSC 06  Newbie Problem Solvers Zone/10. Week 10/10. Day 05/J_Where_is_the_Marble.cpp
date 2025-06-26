#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    int bin_search(vector<int> &arr, int n, int key)
    {
        int l = 0, r = n - 1;
        int ans = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (key == arr[mid])
            {
                ans = mid;
                r = mid - 1;
            }
            else if (key > arr[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }
        return ans;
    }
    void solve()
    {
        int case_no = 1;

        while (true)
        {
            int n, q;
            cin >> n >> q;

            if (n == 0 && q == 0)
                return;

            vector<int> marble(n);

            for (int i = 0; i < n; i++)
            {
                cin >> marble[i];
            }

            sort(marble.begin(), marble.end());

            cout << "CASE# " << case_no++ << ":" << newline;

            while (q--)
            {
                int number;
                cin >> number;
                int idx = bin_search(marble, n, number);

                if (idx == -1)
                    cout << number << " not found" newline;
                else
                    cout << number << " found at " << idx + 1 << newline;
            }
        }
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