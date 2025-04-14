#include <bits/stdc++.h>
using namespace std;

int R, C;
int arr[15][15];

int m_sum(int r, int c)
{
    if (r == R - 1 && c == C - 1)
        return arr[r][c];
    else if (r == R + 1 || c == C + 1)
        return -1000000;

    int op1 = m_sum(r, c + 1);
    int op2 = m_sum(r + 1, c);

    return arr[r][c] + max(op1, op2);
}

int main()
{
    cin >> R >> C;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << m_sum(0, 0) << endl;
    return 0;
}