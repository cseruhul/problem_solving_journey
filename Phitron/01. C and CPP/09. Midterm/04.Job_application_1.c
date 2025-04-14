#include <stdio.h>

int main()
{
    int n, experience;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &experience);
        if (experience < 1)
        {
            printf("Entry-level candidate\n");
        }
        else if (experience >= 1 && experience <= 3)
        {
            printf("Junior candidate\n");
        }
        else if (experience >= 4 && experience <= 7)
        {
            printf("Mid-level candidate\n");
        }
        else
        {
            printf("Senior candidate\n");
        }
    }

    return 0;
}