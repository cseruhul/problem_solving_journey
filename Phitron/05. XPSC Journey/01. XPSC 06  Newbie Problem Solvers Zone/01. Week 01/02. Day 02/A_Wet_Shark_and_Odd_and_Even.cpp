#include <bits/stdc++.h>
using namespace std;

class Solve
{
public:
    void solution()
    {
        int n;
        cin >> n;

        vector<long long> numbers(n);
        vector<long long> even;
        vector<long long> odd;
        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
            if (numbers[i] % 2)
            {
                odd.push_back(numbers[i]);
            }
            else
            {
                even.push_back(numbers[i]);
                ans += numbers[i];
            }
        }

        if (odd.size() % 2 == 0)
        {
            for (auto item : odd)
                ans += item;
        }
        else
        {
            sort(odd.rbegin(), odd.rend());

            for (int i = 0; i < odd.size() - 1; i++)
                ans += odd[i];
        }

        cout << ans;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solve solve;

    solve.solution();

    return 0;
}