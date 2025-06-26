#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll maxN = (1LL << 15);
vector<int> allPalindrome;

class Ruhul_Amin
{
public:
    bool isPalindrome(int x)
    {
        string s = to_string(x);
        int len = s.size();

        for (int i = 0; i < len / 2; i++)
        {
            if (s[i] != s[len - i - 1])
            {
                return false;
            }
        }

        return true;
    }

    void markPalindrome()
    {
        for (int i = 0; i < maxN; i++)
        {
            if (isPalindrome(i))
            {
                allPalindrome.push_back(i);
            }
        }
    }

    void solve()
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> cnt(maxN + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }

        long long ans = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < allPalindrome.size(); j++)
            {
                int curr = (a[i] ^ allPalindrome[j]);
                ans += cnt[curr];
            }
        }

        cout << (ans / 2) << '\n';
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;
    ruhul.markPalindrome();
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}