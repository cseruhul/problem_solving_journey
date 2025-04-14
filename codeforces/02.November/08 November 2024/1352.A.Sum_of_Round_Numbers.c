#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        // split_digits(n, track);
        int i = 0, k = 0;
        int track[5] = {0};
        while (n)
        {
            track[i] = n % 10;
            n = n / 10;
            if (track[i] != 0)
                k++;
            i++;
        }
        printf("%d\n", k);
        for (int i = 0; i < 5; i++)
        {
            if (track[i] != 0 && i == 0)
            {
                printf("%d ", track[i]);
            }
            else if (track[i] != 0 && i == 1)
            {

                printf("%d ", track[i] * 10);
            }
            else if (track[i] != 0 && i == 2)
            {

                printf("%d ", track[i] * 100);
            }
            else if (track[i] != 0 && i == 3)
            {

                printf("%d ", track[i] * 1000);
            }
            else if (track[i] != 0 && i == 4)
            {

                printf("%d ", track[i] * 10000);
            }
        }
        printf("\n");
    }

    return 0;
}