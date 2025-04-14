#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m, x, number;
    scanf("%d %d %d", &n, &m, &x);
    int matrix[n][m];
    int frequency[1001] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            frequency[matrix[i][j]]++;
        }
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ", frequency[i]);
    // }
    while (x--)
    {
        scanf("%d", &number);
        printf("%d\n", frequency[number]);
    }

    return 0;
}
