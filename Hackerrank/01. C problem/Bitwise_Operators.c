#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    int aNd = 0, Or = 0, xOr = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            // printf("a : %d b : %d ", i, j);
            // printf("AND : %d ", i & j);
            // printf("OR : %d ", i | j);
            // printf("XOR : %d\n", i ^ j);

            if ((i & j) < k)
            {
                if ((i & j) > aNd)
                    aNd = i & j;
            }
            if ((i | j) < k)
            {
                if ((i | j) > Or)
                    Or = i | j;
            }
            if ((i ^ j) < k)
            {
                if ((i ^ j) > xOr)
                    xOr = i ^ j;
            }
        }
    }

    printf("%d\n%d\n%d\n", aNd, Or, xOr);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
