#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(1 * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        arr = (int *)realloc(arr, (i + 1) * sizeof(int));
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
