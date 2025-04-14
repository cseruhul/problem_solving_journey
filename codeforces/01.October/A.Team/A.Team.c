#include <stdio.h>

int main()
{
    int n, sum = 0, petya, vasaya, tonya;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d %d", &petya, &vasaya, &tonya);
        if (petya + vasaya + tonya > 1)
        {
            sum++;
        }
    }

    printf("%d", sum);

    return 0;
}