#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    int *ptr_a = &a, *ptr_b = &b;
    scanf("%d %d", ptr_a, ptr_b);

    printf("%d", abs(*ptr_a - *ptr_b));

    free(ptr_a);
    free(ptr_b);
    return 0;
}
