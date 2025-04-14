#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, no_of_max = 0, no_of_min = 0;

    scanf("%d", &n);

    int score[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }
    
    int max_score = score[0], min_score = score[0];

    for (int i = 0; i < n; i++)
    {
        if (score[i] > max_score)
        {
            max_score = score[i];
            no_of_max++;
        }
        if (score[i] < min_score)
        {
            min_score = score[i];
            no_of_min++;
        }
    }

    printf("%d %d", no_of_max, no_of_min);

    return 0;
}
