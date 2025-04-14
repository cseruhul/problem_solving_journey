#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n >= 0)
    {
        cout << n;
    }
    else
    {
        int answer;
        int last_digit = n % 10;
        int without_last = n / 10;
        int without_second_last = without_last / 10;
        without_second_last = without_second_last * 10 + last_digit;
        answer = max(without_last, without_second_last);
        // cout << without_last << " " << (without_second_last * 10 + last_digit);

        cout << answer;
    }

    return 0;
}