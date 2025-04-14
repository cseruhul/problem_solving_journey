#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, answer = 0;
    char *ch = (char *)malloc(3 * sizeof(char));
    scanf("%d", &n);

    while (n--)
    {
        scanf("%s", ch);
        if (strcmp("++X", ch) == 0 || strcmp("X++", ch) == 0)
        {
            answer++;
        }
        else if (strcmp("--X", ch) == 0 || strcmp("X--", ch) == 0)
        {
            answer--;
        }
    }
    printf("%d", answer);
    free(ch);
    return 0;
}