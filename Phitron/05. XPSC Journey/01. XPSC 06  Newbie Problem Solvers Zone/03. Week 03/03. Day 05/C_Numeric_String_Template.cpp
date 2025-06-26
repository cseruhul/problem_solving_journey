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
        map<int, int> number_freq;
        map<int, multiset<int>> template_map;
        vector<int> number(n);

        for (int i = 0; i < n; i++)
        {
            cin >> number[i];
        }

        for (int i = n - 1; i >= 0; i--)
        {
            number_freq[number[i]] = i;
        }

        for (int i = 0; i < n; i++)
        {
            if (number_freq.count(number[i]))
                template_map[number_freq[number[i]]].insert(i);
        }

        int k;
        cin >> k;
        while (k--)
        {
            map<char, int> char_freq;
            map<int, multiset<int>> given_template_map;
            string a;
            cin >> a;

            if (a.size() != n)
            {
                cout << "NO" << endl;
                continue;
            }

            for (int i = a.size() - 1; i >= 0; i--)
            {
                char_freq[a[i]] = i;
            }

            for (int i = 0; i < n; i++)
            {
                if (char_freq.count(a[i]))
                    given_template_map[char_freq[a[i]]].insert(i);
            }

            if (template_map == given_template_map)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
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