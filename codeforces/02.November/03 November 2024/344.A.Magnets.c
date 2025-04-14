#include <stdio.h>
#include <string.h>

int main()
{
    int n, group_count = 1;
    char previous_magnet[3], current_magnet[3];

    scanf("%d", &n);
    scanf("%s", previous_magnet);

    for (int i = 1; i < n; i++)
    {
        scanf("%s", current_magnet);
        if (strcmp(previous_magnet, current_magnet) != 0)
        {
            group_count++;
        }
        strcpy(previous_magnet, current_magnet);
    }

    printf("%d", group_count);

    return 0;
}