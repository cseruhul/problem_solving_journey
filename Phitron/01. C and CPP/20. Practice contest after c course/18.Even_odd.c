#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void odd_even()
{
    int n, even = 0, odd = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("%d %d", even, odd);
}

int main()
{
    odd_even();
    return 0;
}
