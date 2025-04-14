#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<int> bag;

    for (int i = 0; i < n; i++)
    {
        long long ball;
        cin >> ball;
        bag.push_back(ball);
    }

    sort(bag.begin(), bag.end(), greater<int>());

    long long left_color = bag[0];
    long long ans = bag[0];

    for (int i = 1; i < n; i++)
    {
        if (bag[i] == left_color)
        {
            bag[i] = left_color - 1;

            if (bag[i] < 0)
                bag[i] = -1;
        }

        ans += bag[i];

        left_color = bag[i];

        if (left_color == 0)
            break;
    }

    cout << ans;

    return 0;
}