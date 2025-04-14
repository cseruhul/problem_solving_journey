#include <stdio.h>

int main()
{
    int m = 0, n = 0;
    scanf("%d %d", &n, &m);
    int a[n];
    
    int freq[100002] = {0};


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", freq[i]);
    }

    return 0;
}