#include <stdio.h>

int main()
{
    int n, t, needed_time = 0, book_count = 0, book[100002];
    scanf("%d %d", &n, &t);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &book[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (needed_time + book[i] <= t)
        {
            needed_time += book[i];
            book_count++;
        }
    }

    printf("%d", book_count);

    return 0;
}