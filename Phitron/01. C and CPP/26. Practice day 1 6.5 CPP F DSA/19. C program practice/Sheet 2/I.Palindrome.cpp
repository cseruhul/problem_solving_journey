#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int rev = 0;

    while (n)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    return rev;
}

int main()
{
    int n, temp;
    cin >> n;

    temp = reverse(n);

    cout << temp << endl;
    if (n == temp)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}