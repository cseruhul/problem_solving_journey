#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, number, answer = 0;
    scanf("%d", &n);
    int frequency[100001] = {0};

    while (n--)
    {
        scanf("%d", &number);
        frequency[number]++;
    }

    for (int i = 1; i <= 100001; i++)
    {
        if (frequency[i] == 1)
        {
            answer++;
        }
    }

    printf("%d", answer);

    return 0;
}
