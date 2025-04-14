#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    int *x_ptr = &x, *y_ptr = &y;
    int temp;
    int *temp_ptr = &temp;

    scanf("%d %d", x_ptr, y_ptr);

    *temp_ptr = *x_ptr;
    *x_ptr = *y_ptr;
    *y_ptr = *temp_ptr;

    printf("%d %d", *x_ptr, *y_ptr);

    return 0;
}