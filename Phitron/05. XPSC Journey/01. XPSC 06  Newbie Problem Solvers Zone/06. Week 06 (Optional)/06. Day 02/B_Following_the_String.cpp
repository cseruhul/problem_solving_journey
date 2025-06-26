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
        string ans;
        unordered_map<char, int> letter_mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                for (char ch = 'a'; ch <= 'z'; ch++)
                {
                    if (letter_mp.find(ch) == letter_mp.end())
                    {
                        ans += ch;
                        letter_mp[ch]++;
                        break;
                    }
                }
            }
            else
            {
                for (char ch = 'a'; ch <= 'z'; ch++)
                {
                    if (letter_mp[ch] == arr[i])
                    {
                        ans += ch;
                        letter_mp[ch]++;
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
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