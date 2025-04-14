#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long x, y;
    long long *x_ptr, *y_ptr;
    x_ptr = &x;
    y_ptr = &y;

    scanf("%lld %lld", x_ptr, y_ptr);

    printf("%lld\n", *x_ptr + *y_ptr);

    return 0;
}