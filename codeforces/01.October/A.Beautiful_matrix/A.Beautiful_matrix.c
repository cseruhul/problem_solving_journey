#include <stdio.h>
#include <math.h>

int main()
{
    int matrix[5][5];
    int row = 0, col = 0, number;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &number);
            matrix[i][j] = number;
            if (number == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    printf("%d", abs(row + 1 - 3) + abs(col + 1 - 3));

    return 0;
}