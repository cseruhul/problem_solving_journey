#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    long long *arr = (long long int *)malloc(n * sizeof(long long int));

    long long sum = 0;
    long long *sum_ptr = &sum;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        // printf("%lld Sum = %lld\n", arr[i], sum);
        *sum_ptr += arr[i];
    }

    printf("%lld\n", llabs(sum));

    free(arr);

    return 0;
}