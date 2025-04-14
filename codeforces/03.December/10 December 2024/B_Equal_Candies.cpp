#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long int> candies(n);
        long long needed_candies = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> candies[i];
        }

        long long minimum = *min_element(candies.begin(), candies.end());

        for (int i = 0; i < n; i++)
        {
            needed_candies += candies[i] - minimum;
        }

        cout << needed_candies << endl;
    }

    return 0;
}