#include <bits/stdc++.h>
using namespace std;

void print_reverse(int n)
{
    if (n == 0)
    {
        cout << "0 ";
        return;
    }
    if (n / 10 != 0)
        print_reverse(n / 10);

    cout << n % 10 << " ";
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;

        print_reverse(num);

        cout << endl;
    }

    return 0;
}