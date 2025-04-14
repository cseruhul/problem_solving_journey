#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int *ptr_a = &a, *ptr_b = &b, *ptr_c = &c;

    int maximum;
    int minimum;

    int *ptr_maximum = &maximum;
    int *prt_minimum = &minimum;

    scanf("%d %d %d", ptr_a, ptr_b, ptr_c);

    if (*ptr_a >= *ptr_b && *ptr_a >= *ptr_c)
    {
        *ptr_maximum = *ptr_a;
    }
    else if (*ptr_b >= *ptr_a && *ptr_b >= *ptr_c)
    {
        *ptr_maximum = *ptr_b;
    }
    else
    {
        *ptr_maximum = *ptr_c;
    }

    if (*ptr_a <= *ptr_b && *ptr_a <= *ptr_c)
    {
        *prt_minimum = *ptr_a;
    }
    else if (*ptr_b <= *ptr_a && *ptr_b <= *ptr_c)
    {
        *prt_minimum = *ptr_b;
    }
    else
    {
        *prt_minimum = *ptr_c;
    }

    printf("%d %d\n", minimum, maximum);
    return 0;
}