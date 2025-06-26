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
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<stack<ll>> tower;
        for (int i = 0; i < n; i++)
        {
            if (!tower.empty())
            {
                int l = 0, r = tower.size();
                while (l < r)
                {
                    int mid = l + (r - l) / 2;
                    if (tower[mid].top() > arr[i])
                    {
                        r = mid;
                    }
                    else
                    {
                        l = mid + 1;
                    }
                }
                if (l == tower.size())
                {
                    stack<ll> st;
                    st.push(arr[i]);
                    tower.push_back(st);
                }
                else
                {
                    tower[l].push(arr[i]);
                }
            }
            else
            {
                stack<ll> st;
                st.push(arr[i]);
                tower.push_back(st);
            }
        }

        cout << tower.size() << endl;
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