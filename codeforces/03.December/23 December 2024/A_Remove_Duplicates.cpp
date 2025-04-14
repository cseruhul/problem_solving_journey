#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    list<int> ans;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        freq[a[i]] = 1;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (freq[a[i]] == 1)
        {
            ans.push_front(a[i]);
            freq[a[i]] = 0;
        }
    }

    cout << ans.size() << endl;
    for (auto item : ans)
        cout << item << " ";

    return 0;
}