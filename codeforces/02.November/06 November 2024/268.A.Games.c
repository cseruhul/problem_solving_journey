#include <stdio.h>

int main()
{
    int n, uniform_needed = 0, i = 0, j = 0;
    scanf("%d", &n);
    int host_tem[n + 1], guest_tem[n + 1];

    for (i = 0; i < n; i++)
    {

        scanf("%d %d", &host_tem[i], &guest_tem[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i != j && host_tem[i] == guest_tem[j])
            {
                uniform_needed++;
            }
        }
    }

    printf("%d", uniform_needed);

    return 0;
}