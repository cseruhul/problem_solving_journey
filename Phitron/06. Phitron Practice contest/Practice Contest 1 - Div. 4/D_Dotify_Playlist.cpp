#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, k, l, max_length = 0, music_count = 0;
        bool lang_present = false;
        cin >> n >> k >> l;
        vector<int> music(n);
        vector<int> lang(n);
        vector<int> selected;

        for (int i = 0; i < n; i++)
        {
            int mi, li;
            cin >> mi >> li;
            music[i] = mi;
            lang[i] = li;
        }

        for (int i = 0; i < n; i++)
        {
            if (lang[i] == l)
            {
                selected.push_back(music[i]);
                lang_present = true;
                music_count++;
            }
        }

        if (lang_present == false || music_count < k)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(selected.rbegin(), selected.rend());
            int i = 0;

            for (auto item : selected)
            {
                max_length += item;
                i++;
                if (i == k)
                    break;
            }

            cout << max_length << endl;
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