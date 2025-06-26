#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        bool flag = true;
        int position = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                position = i;
                break;
            }
        }

        if (!position)
        {
            cout << "Yes" << endl;
        }
        else
        {
            for (int i = position + 1; i < n; i++)
            {
                int j = (i + 1) % n;
                if (arr[i] > arr[j])
                    flag = false;
            }

            if (flag)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
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