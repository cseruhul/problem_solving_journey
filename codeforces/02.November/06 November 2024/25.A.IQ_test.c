#include <stdio.h>

int main()
{
    int n, even = 0, odd = 0, e_index = 0, o_index = 0;
    scanf("%d", &n);
    int numbers[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            e_index = i;
            even++;
        }
        else
        {
            o_index = i;
            odd++;
        }
    }

    // printf("even = %d\nodd = %d", even, odd);

    if (even < odd)
    {
        printf("%d", e_index + 1);
    }
    else
    {
        printf("%d", o_index + 1);
    }

    return 0;
}