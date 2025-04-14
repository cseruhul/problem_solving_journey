#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int T, n;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &n);
        int A[n], B[n], C[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < n; i++)
        {
            B[i] = A[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (B[j] >= B[j + 1])
                {
                    int temp = B[j];
                    B[j] = B[j + 1];
                    B[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            C[i] = abs(A[i] - B[i]);
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", C[i]);
        }

        printf("\n");
    }

    return 0;
}
