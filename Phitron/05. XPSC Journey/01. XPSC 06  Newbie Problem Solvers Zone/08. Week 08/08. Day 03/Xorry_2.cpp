#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    bool kth_bit_on(int n, int k)
    {
        return ((n >> k) & 1);
    }
    void solve()
    {
        int x;
        cin >> x;
        int msb = __lg(x);
        int b = (1 << msb);
        int a = x ^ b;
        int sum = b;
        int bits = 0;

        for (int k = 0; k <= msb; k++)
        {
            if ((!kth_bit_on(a, k)) && !kth_bit_on(b, k) && ((sum + (1 << k)) <= x))
            {
                bits++;
                sum += (1 << k);
            }
        }

        cout << (1 << bits) << endl;
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