#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int calculate(int n)
    {
        int msb = 0;
        if (n == 0)
            return 0;

        while (n > 1)
        {
            n = n >> 1;
            msb++;
        }

        return (1 << msb);
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        Solution obj;

        cout << obj.calculate(n) - 1 << endl;
    }

    return 0;
}