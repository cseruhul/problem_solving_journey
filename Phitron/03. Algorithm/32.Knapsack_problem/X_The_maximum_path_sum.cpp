#include <bits/stdc++.h>
using namespace std;

int R, C;

int arr[11][11];

int max_sum(int r, int c)
{
    if (r == R - 1 and c == C - 1)
        return arr[r][c];
    else if (r == R + 1 or c == C + 1)
        return -1000000;

    int op1 = max_sum(r, c + 1);
    int op2 = max_sum(r + 1, c);

    return arr[r][c] + max(op1, op2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> R >> C;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << max_sum(0, 0) << endl;

    return 0;
}