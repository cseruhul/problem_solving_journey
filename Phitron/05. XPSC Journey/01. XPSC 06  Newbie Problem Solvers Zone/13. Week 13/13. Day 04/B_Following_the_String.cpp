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

        map<char, int> ch_map;
        for (int i = 0; i < n; i++)
        {
            char character;
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                if (ch_map.find(ch) == ch_map.end())
                {
                    character = ch;
                    ch_map[ch]++;
                    break;
                }
                else if (ch_map[ch] == arr[i])
                {
                    ch_map[ch]++;
                    character = ch;
                    break;
                }
            }

            cout << character;
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