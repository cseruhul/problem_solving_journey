#include <bits/stdc++.h>
using namespace std;

char adj_matrix[10005][10005];
int level[10005][10005];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> adj_matrix[i][j];
        }
    }

    return 0;
}